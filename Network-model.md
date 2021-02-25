# Network Model Layer
- [7. Application Layer](#application-layer)
  
- [6. Presentation Layer](#presentation-layer)
    - This layer is also known as a syntax layer.
    - Character code translation from ASCII to EBCDIC.
    - Data compression: Allows to reduce the number of bits that needs to be transmitted on the network.
    - Data encryption: Helps you to encrypt data for security purposes — for example, password encryption.
    - It provides a user interface and support for services like email and file transfer.
- [5. Session Layer](#session)
- [4. Transport Layer](#Transport)
    - Reliable transmission of data segments between points on a network, including `segmentation`, `acknowledgement` and `multiplexing`
- [3. Network Layer](#network)
    - Structuring and managing a multi-node network, including `addressing`, `routing` and `traffic control` `packet`
    - routing protocols
    - multicast group management
    - network-layer address assignment.
- [2. Data Link Layer](#data-link)
    - Reliable transmission of data `frames` between two nodes connected by a physical layer `error control` and `Adds Logical addresses of the sender and receivers`
- [1. Physical Layer](#physical)
    - Transmission and reception of `raw bit` streams over a physical medium
    - Examples of hardware in the physical layer are network adapters, ethernet, repeaters, networking hubs, etc.

<a name="application-layer"></a>
## Application Layer
The application layer is used by end-user software such as web browsers and email clients. It provides protocols that allow software to send and receive information and present meaningful data to users. A few examples of application layer protocols are the Hypertext Transfer Protocol (HTTP), File Transfer Protocol (FTP), Post Office Protocol (POP), Simple Mail Transfer Protocol (SMTP), and Domain Name System (DNS).

<a name="presentation-layer"></a>
## Presentation Layer
The presentation layer prepares data for the application layer. It defines how two devices should encode, encrypt, and compress data so it is received correctly on the other end. The presentation layer takes any data transmitted by the application layer and prepares it for transmission over the session layer.


<a name="Session"></a>
## Session Layer
The session layer creates communication channels, called sessions, between devices. It is responsible for opening sessions, ensuring they remain open and functional while data is being transferred, and closing them when communication ends. The session layer can also set checkpoints during a data transfer—if the session is interrupted, devices can resume data transfer from the last checkpoint.


<a name="Transport"></a>
## Transport Layer
The transport layer takes data transferred in the session layer and breaks it into “segments” on the transmitting end. It is responsible for reassembling the segments on the receiving end, turning it back into data that can be used by the session layer. The transport layer carries out flow control, sending data at a rate that matches the connection speed of the receiving device, and error control, checking if data was received incorrectly and if not, requesting it again.

<a name="Network"></a>
## Network Layer
The network layer has two main functions. One is breaking up segments into network packets, and reassembling the packets on the receiving end. The other is routing packets by discovering the best path across a physical network. The network layer uses network addresses (typically Internet Protocol addresses) to route packets to a destination node.

<a name="data-link"></a>
## Data Link Layer
The data link layer establishes and terminates a connection between two physically-connected nodes on a network. It breaks up packets into frames and sends them from source to destination. This layer is composed of two parts—Logical Link Control (LLC), which identifies network protocols, performs error checking and synchronizes frames, and Media Access Control (MAC) which uses MAC addresses to connect devices and define permissions to transmit and receive data.


<a name="physical"></a>
## Physical Layer
The physical layer is responsible for the physical cable or wireless connection between network nodes. It defines the connector, the electrical cable or wireless technology connecting the devices, and is responsible for transmission of the raw data, which is simply a series of 0s and 1s, while taking care of bit rate control.

<a name="presentation-layer"></a>
## Presentation Layer


<a name="presentation-layer"></a>
## Presentation Layer
