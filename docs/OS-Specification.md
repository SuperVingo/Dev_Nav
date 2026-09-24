# OS Specification

The Samsung Exynos 4412 is a 32nm quad-core ARM Cortex-A9 system-on-chip introduced by Samsung in 2012 for smartphones and tablets. \[[1](https://www.notebookcheck.net/Samsung-Exynos-4412-Quad-ARM-SoC.86876.0.html), [2](https://versus.com/en/samsung-exynos-4412)\]

Key Specifications

* **CPU:** Quad-core ARM Cortex-A9 clocked at 1.4 GHz to 1.6 GHz.  
* **GPU:** ARM Mali-400 MP4.  
* **Memory Support:** LPDDR2, DDR2, and DDR3 up to 400 MHz (6.4 GB/s bandwidth).  
* **Manufacturing Process:** 32nm HKMG (High-K Metal Gate). \[[1](https://www.notebookcheck.net/Samsung-Exynos-4412-Quad-ARM-SoC.86876.0.html), [2](https://versus.com/en/samsung-exynos-4412)\]

32-bit ARMv7-A instruction set architecture (ISA). \[[1](https://www.embedic.com/technology/details/what-exactly-is-cortex--armv8--arm-architecture--arm-instruction-set--soc-?srsltid=AfmBOoogGtVsWp0vZFim43C3zDm5iiruKw2yFZy1RoQ3dgVSiXUFW7gy), [2](https://www.scribd.com/document/623649023/Samsung-s-mobile-lines-2018-06-12-2)\]

—————————————————————————————————————

ARMv7-A 32bit unix-like os  
Bootloader : U-Boot  
Monolithic Kernel

Embedded Gereral-purpose OS \+ navigation-oriented services

Hardware  
\-\> U-Boot  
\-\> Our OS

1. multitasking (gps, audio, ui, navigator 등등 동시 작동)  
2. user / kernel 분리  
3. POSIX-inspired (우리가 구현한 POSIX 형태의 API로)  
4. 처음에는 Single core, 나중에 추후에 SMP

Navigation  
1 위치 수신 및 계산  
2 경로 계산  
3 Map rendering  
4 touch screen  
5 audio

Multitasking   
Preemption   
Priority  
Memory protection   
Filesystem   
Graphics   
Input   
Audio   
GPS   
Networking

01\. OS Goal / Requirement ↓ 02\. Kernel Architecture ↓ 03\. CPU / Privilege / Exception Model ↓ 04\. Memory Architecture ↓ 05\. Process / Thread Model ↓ 06\. Scheduler ↓ 07\. Interrupt / Timer ↓ 08\. Driver Architecture ↓ 09\. IPC ↓ 10\. VFS / Storage ↓ 11\. User ABI / Syscall ↓ 12\. Graphics / Input ↓ 13\. Navigation Services ↓ 14\. Security ↓ 15\. Boot / Update / Recovery  
260914  
[https://docs.google.com/document/d/18pzqJ3iSCR8r2IMkcbGWnGRJz7hVt54Xn9WMBzxp0c0/edit?tab=t.1vpa2vqjvv0t](https://docs.google.com/document/d/18pzqJ3iSCR8r2IMkcbGWnGRJz7hVt54Xn9WMBzxp0c0/edit)

v0.1 OS Requirement 생성

# v0.1 OS Requirement

# v0.1 OS Requirement

1. Target CPU : ARM Cortex-A9 / Exynos4412   
2. ISA : ARMv7-A  
3. Bootloader : U-Boot  
4. OS : General purpose OS  
5. Kernel / User 분리  
6. Multitasking  
7. Process / Thread  
8. Preemption  
9. Priority  
10. Virtual mem  
11. Memory Protection  
12. FIlesystem  
13. device driver  
14. graphics  
15. Touch \+ keyboard input  
16. GPS  
17. Audio  
18. POSIX-Inspired  
19. Network…? 추후에  
20. single core \-\> smp 확장  
21. 언어 c / c++라인 (추후에 언어 설계도 괜찮을듯?)

QEMU : vexpress-a9 기반으로 개발  
\-\> exynos4412로 포팅

Principle 1 : Platform independence : 특정 soc / board에 의존하면 안됨

## Kernel Architecture

Modular Monolithic Kernel

kernel \- ARM SVC mode  
user \- ARM user mode  
