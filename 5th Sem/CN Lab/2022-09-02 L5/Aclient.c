#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PORT 8080

int main()
{
    int sockfd;
    struct sockaddr_in servaddr;

    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)
    {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&servaddr, 0, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = INADDR_ANY;

    int len, n1, n2, res = 0;
    char op;
    len = sizeof(servaddr);

    printf("Enter the number1: ");
    scanf("%d", &n1);

    printf("Enter the number2: ");
    scanf("%d", &n2);

    printf("Enter the operator ( out of +, -, *, /): ");
    scanf("\n%c", &op);

    sendto(sockfd, &n1, sizeof(int), 0, (struct sockaddr *)&servaddr, len);
    sendto(sockfd, &n2, sizeof(int), 0, (struct sockaddr *)&servaddr, len);
    sendto(sockfd, &op, sizeof(char), 0, (struct sockaddr *)&servaddr, len);

    recvfrom(sockfd, &res, sizeof(int), 0, (struct sockaddr *)&servaddr, &len);
    printf("The result is: %d\n", res);

    close(sockfd);
    return 0;
}