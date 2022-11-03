#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#define PORT 8080

int isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int sockfd, num, nd, i, flag;
    struct sockaddr_in servaddr;
    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) != (-1))
    {
        printf("Create Socket: S\n");
    }
    else
    {
        printf("Create Socket: F\n");
        exit(0);
    }
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = INADDR_ANY;
    if (connect(sockfd, ((struct sockaddr *)&servaddr), sizeof(servaddr)) == 0)
    {
        printf("Connection: S\n");
    }
    else
    {
        printf("Connection: F\n");
        exit(0);
    }
    while (1)
    {
        recv(sockfd, &num, sizeof(int), 0);
        if (num == 0)
            break;
        flag = isPrime(num);
        send(sockfd, &flag, sizeof(int), 0);
    }
    close(sockfd);
}