Notizen 20. August 2019
=======================

Koaxialkabel
============

|Typen|  Übertragungsart   |                                Einsatzgebiet                              |
|-----|--------------------|---------------------------------------------------------------------------|
|RG-11|Basisbandübertragung|Thick-Ethernet -> Einsatz als Backbone, Reichweite 500 Meter (Yellow Cable)|
|RG-58|Basisbandübertragung|    Thin-Ethernet/Cheapternet -> LAN Vernetzng, Reichweite 185 Meter       | 
|RG-59|Breitbandübertragung|                          TV-Kabel/Antennenkabel                           |
|RG-62|Basisbandübertragung|                               ARCnet-Netze                                |

---

- Basisbandübertragung
    - Kabel hat einen Kanal
    - Kein Multiplexing, Kompletter Frequenzraum ist nutzbar

- Breitband
    - Multiplexing
    - Einteilung in Frequenzbänder
    - Mehrere Kanäle stehen zur Verfügung

---

- Anschlusstechnik bei Ethernetnetzen mit Koaxialkabel
    - BNC - Steckersystem     
        - Bayonette Neill-Councilman
    - T-Stücke     
    - BNC-Terminatoren -> 50 Ohm Endwiderstände
     
- Aufbau eines Netzes
    - Bussystem:
        - Clients zwischen Terminatoren
        - Mehrere Nodes an einem Kabel (Weil Bus und so)
    - Zugriffsverfahren:
        - CSMA/CD:
            - CSMA: Carrier Sense, Multiple Access
            - CD: Collision Detection
        - CSMA/CA:
            - CSMA: Carrier Sense, Multiple Access
            - CA: Collision Avoidance

---


Grundlagen Twisted Pair
=======================

- 4 verdrillte Adernpaare
    - 8 Leitungen mit Kupferkern, welche jeweils als Paar verdrillt werden.
    - Verdrillung verbessert die elektrische Leitereigenschaften
    - Anzahl und Exaktheit der Verdrillungen pro Zoll des Kabels beeinflussen:
        - das Dämpfungsverhalten
            - Die Welltenwiderstände der verdrillten Adern heben sich gegenseitig auf!
            - Folge: Deutlich höhere Übertragungsgeschwindigkeiten.
    - Gefahren:
        - Crosstalk verursacht durch Störstrahlung von außen!
            - Überspringen von Packeten auf anderes Adernpaar
    - UTP = Unshielded Twisted Pair - ungeschirmt
    - USTP = Unshielded Shielded Twisted Pair - Nur ganzes Kabel geschirmt
    - SUTP = Shielded Unshielded Twisted Pair - Nur einzelne Adern geschirmt
    - SSTP = Shielded Shielded Twisted Pair - vollständig geschirmt

- Einteilung der TP-Kabel in Kategorien
    - Cat. 1-8
    - vorgenommen durch die Organisation "EIA/TIA" (Electronic Industries Association/Telecommunication Industries Association)
