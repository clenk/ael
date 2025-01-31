# APT29 Operations Flow

Please see the formal [APT29 Intelligence Summary](/Enterprise/apt29/Intelligence_Summary.md) which includes a break-down of the cited intelligence used for each step of this emulation.

---

![/Emulation_Plan/OpFlow_Diagram.png](/Enterprise/apt29/Emulation_Plan/OpFlow_Diagram.png)

---

## Scenario 1

Based on [CosmicDuke](https://attack.mitre.org/software/S0050/), [MiniDuke](https://attack.mitre.org/software/S0051/), [SeaDuke/SeaDaddy](https://attack.mitre.org/software/S0053/), [CozyDuke/CozyCar](https://attack.mitre.org/software/S0046/), and [HAMMERTOSS](https://attack.mitre.org/software/S0037/)

This scenario begins with a legitimate user clicking on a malicious payload delivered via a "spray and pray" spearphishing campaign. The attacker immediately kicks off a "smash-and-grab", rapid espionage mission, gathering and exfiltrating data. After initial exfiltration, the attacker realizes the value of the victim and subsequently deploys a stealthier toolkit, changing TTPs and eventually moving laterally through the rest of the environment. The scenario ends with the execution of previously established persistence mechanisms.

The content to execute this scenario was tested and developed using Pupy, Meterpreter, and other custom/modified scripts and payloads. Pupy and Meterpreter were chosen based on their available functionality and similarities to the adversary's malware within the context of this scenario, but alternative red team tooling could be used to accurately execute these and other APT29 behaviors.

---

## Scenario 2

Based on [PowerDuke](https://attack.mitre.org/software/S0139/), [POSHSPY](https://attack.mitre.org/software/S0150/), [CloudDuke](https://attack.mitre.org/software/S0054/), and more recent (2016-2018) TTPs

This scenario begins with a legitimate user clicking on a malicious payload delivered via a targeted spearphishing campaign. The attacker employs a methodical approach to compromising the initial target, establishing persistence, gathering credential material, then finally enumerating and compromising the entire domain. Data is exfiltrated to attacker controlled cloud storage. The scenario ends with a simulated time-lapse where previously established persistence mechanisms are executed.

The content to execute this scenario was tested and developed using PoshC2 and other custom/modified scripts and payloads. PoshC2 was chosen based on its available functionality and similarities to the adversary's malware within the context of this scenario, but alternative red team tooling could be used to accurately execute these and other APT29 behaviors.

---
