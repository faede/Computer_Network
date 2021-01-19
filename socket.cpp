#include <bits/socket.h>
struct sockaddr{
    sa_family_t sa_family; //地址族类型
    char sa_data[14];
};

struct sockaddr_storage{
   sa_family_t sa_family;
   unsigned long int __ss_align;
   char __ss_padding[128 - sizeof(__ss_align)];
};


#include <sys/un.h>
struct sockaddr_un{
   sa_family_t sin_family; /* 地址族： AF_UNIX */
   char sun_path[109]; /* 文件路径名 */
};

struct sockaddr_in{
   sa_family_t sin_family; // 地址族：AF_INET
   u_int16_t sin_port; // 端口号
   struct in_addr sin_addr; // IPV$地址结构体
};

struct in_addr{
    u_int32_t s_addr; // IPV地址，要用网络字节序表示
};

struct sockaddr_in6{

    sa_family_t sin6_family; // AF_INET6
    u_int16_t sin6_port;
    u_int32_t sin6_flowinfo; // 流信息，应设置为0
    struct in6_addr sin6_addr; // IPV6地址结构体
    u_int32_t sin6_scope_id; // scope ID, 尚处于试验阶段
};
struct in6_addr{
    unsigned char sa_addr[16]; // IPV6 地址，要用网络字节序表示示
};
