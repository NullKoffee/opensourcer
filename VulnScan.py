import socket
def retBanner(ip, port):
    try:
        socket.setdefaulttimeout(2)
        socket.socket()
        s.connect((ip, port))
        banner = s.recv(1024)
        return banner
    except:
            return
# Check if server is vunlerable
def checkVulns(banner):
    if "FreeFloat FTP Server (Version 1.00)" in banner:
        print "[+] FreeFloat FTP Server is vulnerable."
    elif "3Com FTP Server Version 2.00" in banner:
        print "[+] 3Com FTP Server is vulnerable."
    elif "Ability Server 2.34" in banner:
        print "[+] Ability FTP Server is vulnerable."
    elif "Sami FTP Server 2.0.2" in banner:
        print "[+] Sami FTP Server is vulnerable."
    else:
        print "[-] FTP Server is not vulnerable."
    return
    
def main():
    portlist = [21,22,25,80,110,443]
    for x in range(1, 225):
        ip = "192.168.95." + str(x)
        for port in portlist:
            banner = retBanner(ip, port)
            if banner:
                print "[+] " + ip + ": " + banner
                checkVulns(banner)
if __name__ == "__main__":
    main()
