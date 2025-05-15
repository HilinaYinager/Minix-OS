# Minix-OS 
## Documetation Description 
This documentation provides a comprehensive overview of Minix OS, including an introduction with background and motivation, clearly defined objectives, and detailed hardware and software requirements. It outlines the installation steps with snippet images and emphasizes creating an account using the full name. The document also addresses issues faced during installation, provides corresponding solutions, and discusses supported file systems with reasoning. Additionally, it evaluates the advantages and disadvantages of using Minix OS, concludes the findings, and offers future outlook and recommendations for further exploration.
## Installation description
The installation section provides a step-by-step guide to setting up Minix OS using Oracle VM VirtualBox. It includes downloading the Minix ISO file, creating a new virtual machine in VirtualBox, configuring the VM’s hardware settings such as memory and disk space, and mounting the ISO to boot the system. The installation process walks through the Minix OS setup screens, with an emphasis on creating a user account using your full name. The section also contains screenshot snippets to help visualize each step and simplify the installation experience.
## About the System call 
This documentation focuses on the chown() system call in Minix OS, which is used to change the ownership of a file. The chown() call allows a user (typically the superuser) to assign a new owner and/or group to a specified file or directory, identified by its path. It takes the file path, user ID (UID), and group ID (GID) as arguments. This system call is crucial for managing file permissions and enforcing access control in multi-user environments. In this project, chown() was implemented and tested to understand its behavior, required privileges, and impact on file ownership within the Minix filesystem.






