#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PORT 8080

struct Anas
{
    int n1, n2;
    char op;
};

int main()
{
    int sockfd;
    struct sockaddr_in servaddr, cliaddr;

    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
    {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    int res = 0, len = sizeof(cliaddr);

    struct Anas a1;

    recvfrom(sockfd, &a1, sizeof(struct Anas), 0, (struct sockaddr *)&cliaddr, &len);

    switch (a1.op)
    {
    case '+':
        res = a1.n1 + a1.n2;
        break;

    case '-':
        res = a1.n1 - a1.n2;
        break;

    case '*':
        res = a1.n1 * a1.n2;
        break;

    case '/':
        res = a1.n1 / a1.n2;
        break;

    default:
        printf("\n Invalid entry");
    }
    sendto(sockfd, &res, sizeof(int), 0, (struct sockaddr *)&cliaddr, len);
    close(sockfd);
}