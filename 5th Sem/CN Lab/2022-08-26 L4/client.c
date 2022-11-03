#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define PORT 8080
#define MAXLINE 1024

int main()
{
    int sockfd;
    char buffer[MAXLINE];
    char *hello = "Hello  from client";
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
    int n, len;
    len = sizeof(servaddr);
    printf("Enter the number: ");
    scanf("%d", &n);
    // client assigns a random port to the UDP socket
    sendto(sockfd, &n, sizeof(int), 0,
           (struct sockaddr *)&servaddr, len);
    recvfrom(sockfd, &n, sizeof(int), 0, (struct sockaddr *)&servaddr, &len);
    printf("Server: %d\n", n);
    close(sockfd);
    return 0;
}