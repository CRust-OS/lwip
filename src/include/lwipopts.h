/*
 *  Copyright (c) 2014, Return Infinity
 *  All rights reserved.
 *  
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  
 *  * Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *  
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *  
 *  * Neither the name of BareMetal-lwIP nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *  
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 *  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 *  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *  
 */
#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

#define NO_SYS                      1
#define MEM_LIBC_MALLOC             0		//0 - internal allocator, 1 - external (newlib for example)
#define MEMP_MEM_MALLOC             1
#define MEM_ALIGNMENT               4
#define MEM_SIZE                    (4 * 1024 * 1024)
#define MEMP_NUM_PBUF               1024
#define MEMP_NUM_UDP_PCB            20
#define MEMP_NUM_TCP_PCB            20
#define MEMP_NUM_TCP_PCB_LISTEN     16
#define MEMP_NUM_TCP_SEG            128
#define MEMP_NUM_REASSDATA          32
#define MEMP_NUM_ARP_QUEUE          10
#define PBUF_POOL_SIZE              512
#define LWIP_ARP                    1
#define IP_REASS_MAX_PBUFS          64
#define IP_FRAG_USES_STATIC_BUF     0
#define IP_DEFAULT_TTL              255
#define IP_SOF_BROADCAST            1
#define IP_SOF_BROADCAST_RECV       1
#define LWIP_ICMP                   1		/* enable ICMP module inside IP stack */
#define LWIP_BROADCAST_PING         1		/* respond to broadcast pings */
#define LWIP_MULTICAST_PING         1		/* respond to multicast pings */
#define LWIP_RAW                    1
#define TCP_WND                     (4 * TCP_MSS)
#define TCP_MSS                     1460
#define TCP_SND_BUF                 (8 * TCP_MSS)
#define TCP_LISTEN_BACKLOG          1
#define LWIP_NETIF_STATUS_CALLBACK  1
#define LWIP_NETIF_LINK_CALLBACK    1
#define LWIP_NETIF_HWADDRHINT       1
#define LWIP_NETCONN                0
#define LWIP_SOCKET                 0
#define LWIP_STATS                  1
#define LWIP_STATS_DISPLAY          1
#define MEM_STATS                   0
#define SYS_STATS                   0
#define MEMP_STATS                  0
#define LINK_STATS                  0
#define ETHARP_TRUST_IP_MAC         0
#define ETH_PAD_SIZE                2
#define LWIP_CHKSUM_ALGORITHM       2
#define LWIP_TCP_KEEPALIVE          1
#define LWIP_NETIF_TX_SINGLE_PBUF   1

// Keepalive values, compliant with RFC 1122. Don't change this unless you know what you're doing
#define TCP_KEEPIDLE_DEFAULT        10000UL // Default KEEPALIVE timer in milliseconds
#define TCP_KEEPINTVL_DEFAULT       2000UL  // Default Time between KEEPALIVE probes in milliseconds
#define TCP_KEEPCNT_DEFAULT         9U      // Default Counter for KEEPALIVE probes

/*
#define mem_init()
#define mem_free                    mch_free
#define mem_malloc                  mch_malloc
#define mem_calloc(c, n)            mch_zalloc((c) * (n))
#define mem_realloc(p, sz)          (p)
*/

#define LWIP_DEBUG                  1

#define TCP_OUTPUT_DEBUG            LWIP_DBG_ON
/*
#define ETHARP_DEBUG                (LWIP_DBG_ON | LWIP_DBG_TRACE)
#define NETIF_DEBUG                 LWIP_DBG_ON
#define PBUF_DEBUG                  LWIP_DBG_ON
#define API_LIB_DEBUG               LWIP_DBG_ON
#define API_MSG_DEBUG               LWIP_DBG_ON
#define SOCKETS_DEBUG               LWIP_DBG_ON
#define ICMP_DEBUG                  LWIP_DBG_ON
#define INET_DEBUG                  LWIP_DBG_ON
#define IP_DEBUG                    LWIP_DBG_ON
#define IP_REASS_DEBUG              LWIP_DBG_ON
#define RAW_DEBUG                   LWIP_DBG_ON
#define MEM_DEBUG                   LWIP_DBG_ON
#define MEMP_DEBUG                  LWIP_DBG_ON
#define SYS_DEBUG                   LWIP_DBG_ON
#define TCP_DEBUG                   LWIP_DBG_ON
#define TCP_INPUT_DEBUG             LWIP_DBG_ON
#define TCP_OUTPUT_DEBUG            LWIP_DBG_OFF
#define TCP_RTO_DEBUG               LWIP_DBG_ON
#define TCP_CWND_DEBUG              LWIP_DBG_ON
#define TCP_WND_DEBUG               LWIP_DBG_ON
#define TCP_FR_DEBUG                LWIP_DBG_ON
#define TCP_QLEN_DEBUG              LWIP_DBG_ON
#define TCP_RST_DEBUG               LWIP_DBG_ON
#define UDP_DEBUG                   LWIP_DBG_ON
#define TCPIP_DEBUG                 LWIP_DBG_ON
#define PPP_DEBUG                   LWIP_DBG_ON
#define SLIP_DEBUG                  LWIP_DBG_ON
#define DHCP_DEBUG                  LWIP_DBG_ON
*/
#endif /* __LWIPOPTS_H__ */
