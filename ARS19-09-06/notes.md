Notizen 6. September 2019
=========================

TP-Kabel
--------

---
 
### Farbkodierung des TP-Kabels nach 568
||A | B|Funktion|
|-|-|--|--------|
|1|grün/weiß|orange/weiß|Senden|
|2|grün|orange|Senden|
|3|orange/weiß|grün/weiß|Empfangen
|4|blau|blau||
|5|blau/weiß|blau/weiß||
|6|orange|grün|Empfangen|
|7|braun/weiß|braun/weiß||
|8|braun|braun||

---

### Anschlusstechnik für TP-Kabel

- RJ45
    - Stecker
    - Dosen
    - Patchfelder
    - Werkzeug
         - Abisolierer
         - RJ45-Crimpzange (Empfehlung: Hirose)
         - LSA Auflegewerkzeug
             - drückt die einzelnen 8 Leitungen in die Schneidkontakte der Dosen und Patchfelder
         - Seitenschneider
         - Abisolierer
    - steht für registered jack

---

### LWL
- Licht (Elektromagnetische Wellen zwischen 3\*10^11 bis 3\*10^15) als Übertragungsmedium
    - Infrarot
    - sichtbares Licht
    - UV
- Größenangaben üblicherweiße als Wellenlänge
- Wellenlänge wird meist in Nanometer angegeben
- Meistens wird ein optisch leitfähiges Medium genutzt; Bspw.: Glasfaser
- Glasfaser
    - Quarzsand
    - dünne, gezogene Fädchen
- Hohe Frequenz im optischen Bereich ermöglicht hohe Datenübertragungsrate
- Niedrigere Geschwindigkeit als bei Kupfer, aber deutlich höherer Durchsatz
- Phänomen der Brechung wichtige Grundlage für LWL
    - Dichte von Medium und umgebener Materie/Isolation muss beachtet werden um bei Knicken eine totale Reflektion zu erreichen -> Kurven machbar
    - Brechung lenkt Licht ab bei Mediumwechsel
- Aufbau LWL:
    - Faserkern (core) -> Lichtleitender Kern
    - Fasermantel (cladding) -> lichtleitender Mantel, niedrigere optische Dichte
    - primäre Kunststoffschicht (primärcoating) -> Schutz für eigentlichen Leiter
    - (sekundäre Kunststoffschicht (sekundärcoating) -> Erhöhung der Zugfestigkeit)
- Vorteile:
    - Unempfindlich gegen elekromagnetische Einstrahlung
    - Keine Elektromagnetische Abstrahlung
    - Galvanische Entkopplung Sender/Entfernung
    - Geringe Dämpfung
    - Geringes Gewicht
    - Geringe Herrstellungskosten
    - Unempfindlich gegen Temperaturschwankungen

- Multimode
    - Unterstützt mehrere Lichtstrahlen parallel
    - Mehrere Frequenzen möglich
- Sindlemode
    - Unterstützt einen Lichtstrahl parallel
    - Auf eine Frequenz optimiert
- Laufzeitunterschiede je nach Frequenz und Kabel
    - Verwendete Lichtquelle
    - Kabeldicke
    - Single-/Multimodekabel
- Optische Dämpfung
    - Lichtabsorbation
        -> Aufnahme von Licht durch leitendes Material und Umwandlung in Wärmeenergie
    - Lichtstreuung: Licht streut und steht in der Ausbreitungsrichtung nicht mehr zur Verfügung -> Zu steiler Winkel an cladding -> Signalverlust
- Bandbreite-Länge-Produkt MHz x KM als Qualitätskennwert für Glasfaserleitung

- LWL-Typen
    - Multimode-Stufenindexfaser
         - Feste Grenze für Wechsel der optischen Dichte
         - Mehrere Moden
         - relativ starke Dämpfung
    - Multimode-Gradiantenfaser
         - kontinuirliche Änderung der optischen Dichte von Kernmitte bis Mantel
         - geringere Dämpfung
         - Nutzung in lokalen Netzen
         - Bis zu 10 km
    - Singlemode-Stufenindexfaser
         - Feste Grenze für Wechsel der optischen Dichte
         - geringer Kerndurchmesser -> Nur ein Mode
         - geringe Dämpfung
         - Bis zu 160 km ohne Signalverstärkung


#### LWL- Kabelbezeichnung
|  |   Bedeutung   |       Symbol      |     Erläuterung                                  |
|--|---------------|-------------------|--------------------------------------------------|
|1 | Kabelart      | I                 | Innenkabel                                       |
|  |               | A                 | Außenkabel                                       |
|  |               | AT                | Außenkabel, teilbar                              |
|--|---------------|-------------------|--------------------------------------------------|
|2 | Faserschutz   | F                 | Faser                                            |
|  |               | V                 | Vollader                                         |
|  |               | H                 | Hohlader, ungefüllt                              |
|  |               | W                 | Hohlader, gefüllt                                |
|  |               | H                 |Bündelader, ungefüllt                             |
|  |               | W                 | Bündelader, gefüllt                              |
|--|---------------|-------------------|--------------------------------------------------|
|3 | Metallseele   | S                 | Kabelseele mit Metall                            |
|--|---------------|-------------------|--------------------------------------------------|
|4 | Füllung       | F                 | Petrolatfüllung der Hohlräume                    |
|--|---------------|-------------------|--------------------------------------------------|
|5 | Schutzhülle   | H                 | halogenfreies Material                           |
|  |               | Y                 | PVC                                              |
|  |               | 2Y                | PE                                               |
|  |               | (L) 2Y            | Schichtenmantel                                  |
|  |               | (D) 2Y            | PE mit Kunststoffschicht                         |
|  |               | (Z) 2Y            | PE mit nichtmetallischer Zugentlastung           |
|  |               | IIP               | PUR                                              |
|--|---------------|-------------------|--------------------------------------------------|
|6 | Bewehrung     | V                 | PVC-Mantel                                       |
|  |               | IIP               | PUR-Mantel                                       |
|  |               | H                 | halogenfreies Material                           |
|  |               | B                 | Bewehrung                                        |
|  |               | BY                | Bewehrung mit Schutzhülle                        |
|  |               | B2Y               | Bewehrung mit PE-Schutzhülle                     |
|--|---------------|-------------------|--------------------------------------------------|
|7 | Fasernzahl    |                   | Anzahl der Bündel x Anzahl der Fasern pro Bündel |
|--|---------------|-------------------|--------------------------------------------------|


|  |   Bedeutung   |       Symbol      |     Erläuterung                                  |
|--|---------------|-------------------|--------------------------------------------------|
|8 | Fasernart     | E                 | Single Mode                                      |
|  |               | G                 | Gradientenfaser                                  |
|  |               | S                 | Stufenfaser(Glas/Glas)                           |
|  |               | K                 | Stufenfaser(Glas/Kunststoff)                     |
|  |               | Q                 | Quasi-Gradientenfaset(Glas/Glas)                 |
|  |               | P                 | Plastikfaser(Kunststoff/Kunststoff)              |
|--|---------------|-------------------|--------------------------------------------------|
|9 | Kern          |                   | Kerndurchmesser in nm                            |
|--|---------------|-------------------|--------------------------------------------------|
|10| Mantel        |                   | Manteldurchmesser in nm                          |
|--|---------------|-------------------|--------------------------------------------------|
|11| Dämpfung      |                   | Dämpfungsbelag in dB/km                          |
|--|---------------|-------------------|--------------------------------------------------|
|12| Wellenlänge   | B                 | 850 nm                                           |
|  |               | F                 | 1300 nm                                          |
|  |               | H                 | 1550 nm                                          |
|--|---------------|-------------------|--------------------------------------------------|
|13| Dispersion    |                   | B x L                                            |
|--|---------------|-------------------|--------------------------------------------------|
|14|Zusatzinformation| LG              | Lagenverseilung                                  |

#### Verbindung von LWL
- Spleißen -> Verschweißen von zwei adern mit plasma
    - Wiederstand zwischen 0,1 und 0,03 dB
    - Keine Reflextion -> Rückflussdämpfung bleibt unberührt
    

PoWi
----

### Unternehmensformen
- Personengesellschaften
    - Einzelunternehmen bzw. Kaufmann
        - Eintragung beim Amtsgericht im Handelsregister A
        - Gründer: Eine natürliche Person
        - Beginn des Gewerbes: Unmittelbar nach Anmeldung beim Gewerbeaufsichtsamt -> also sofort
        - Kapital zur Gründung kommt aus ihrem Privatvermögen
        - Der Einzelunternehmer ist immer Vollhafter gegenüber kreditgebenden Banken oder gegenüber Gläubigern
        - Der Name des Unternehmens beinhaltet den Namen des Kaufmanns
    - Gbr -> Gesellschaft bürgerlichen Rechts
    - OHG -> Offene Handelsgesellschaft
    - Kommanditgesellschaft
- Kapitalgesellschaften
    - UG -> Unternehmergesellschaft
    - Gmbh -> Gesellschaft mit beschränkter Haftung
    - AG -> Aktiengesellschaft
    - KGaA -> Kommanditgesellschaft auf Aktien

