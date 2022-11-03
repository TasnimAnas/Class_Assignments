#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/socket.h>
#define PORT 8080

int main()
{
    int sockfd, connfd[3], l, num, flag, n;
    struct sockaddr_in servaddr, cliaddr;
    l = sizeof(cliaddr);
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
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    if (bind(sockfd, ((struct sockaddr *)&servaddr), sizeof(servaddr)) == 0)
    {
        printf("Bind Socket: S\n");
    }
    else
    {
        printf("Bind Socket: F\n");
        exit(0);
    }
    if (listen(sockfd, 4) == 0)
    {
        printf("Listening: S\n");
    }
    else
    {
        printf("Listening: F\n");
        exit(0);
    }
    if ((connfd[0] = accept(sockfd, ((struct sockaddr *)&cliaddr), &l)) >= 0)
    {
        printf("Accept 1: S\n");
    }
    else
    {
        printf("Accept 1: F\n");
        exit(0);
    }
    if ((connfd[1] = accept(sockfd, ((struct sockaddr *)&cliaddr), &l)) >= 0)
    {
        printf("Accept 2: S\n");
    }
    else
    {
        printf("Accept 2: F\n");
        exit(0);
    }
    if ((connfd[2] = accept(sockfd, ((struct sockaddr *)&cliaddr), &l)) >= 0)
    {
        printf("Accept 3: S\n");
    }
    else
    {
        printf("Accept 3: F\n");
        exit(0);
    }
    while (1)
    {
        int isPrime = 0, isEven = 0;
        recv(connfd[0], &num, sizeof(int), 0);
        printf("Client's Number: %d\n", num);
        send(connfd[1], &num, sizeof(int), 0);
        send(connfd[2], &num, sizeof(int), 0);
        if (num == 0)
            break;
        recv(connfd[1], &flag, sizeof(int), 0);
        isEven = flag;
        recv(connfd[2], &flag, sizeof(int), 0);
        isPrime = flag;
        send(connfd[0], &isEven, sizeof(int), 0);
        send(connfd[0], &isPrime, sizeof(int), 0);
    }

    close(connfd[1]);
    close(connfd[2]);
    close(connfd[0]);
    close(sockfd);
}