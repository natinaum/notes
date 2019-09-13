**Notizen 23.8.19**
===================

*Vernetzte IT-Systeme*
--------------------
- Warum Netzwerke als Verbudn von Rechnern?
    * schnellere Kommunikation
    * gemeinsame Nutzung von:
        - Datenbeständen
        - Netzwerkgeräten
            * Drucker
            * Scanner
            * etc.    
        - Programme 
- Netzwerk als Verfügbarkeitsverband
    * Schnelle Alternativen bei Ausfall von Netzwerkarbeitsplätzen!
- Netz als Funktionsverbund
    * Gemeinsame Nutzung von Geräten u. Diensten
        - Drucker
        - Datenbankserver
        - Internetzugang
        - etc.
- Netzwerk als Last- bzw. Leistungsverbund
   - Bsp.:
      * Nutzung gleichwertiger/redundanter Netzwerkverbindungen für das Übertragen von Daten
      * Server Cluster mit automatischer Verteilung der Rechenlast auf die im Cluster vorhandenen Server, abhängig von der jeweiligen Auslastung des Servers
- Geographische Ausdehnung von Netzwerken
   * LAN = Local Area Network => Eigentümer, Betreiber u. Nutzer meist identisch
   * MAN = Metroplolian Area Network => Stadt ist Eigentümer; Stadtwerke Betreiber; Unternehmen/Bürger sind Nutzer
   * WAN = Wide Area Network
LAN
- Kabelgebunden
   * Kupferkabel
       - Koaxialkabel
       - Twisted Pair Kabel
   * LWL-Kabel
       - Multimodekabel
       - Monomodekabel
- Funkbasiert
   * WiFi
   * Blue-Tooth
   * Richtfunk
   * Infrarot
- Aufbau eines Koaxialkabels
   * innerste Schicht: Signalleitender Kupferkern als Droht oder Litzer
   * zweite Schicht: Dielektrikum
       - nichtleitendes Metal
       - Verhindert Ausstrahlung der Signale nach außen
   * dritte Schicht: Drahtgeflecht als Schutzschirm gegen Störstrahlung von außen
   * äusserste Schicht: Schutzmantel gegen mechanische Zerstörung des Kabels



*Anwendungsentwicklung*
---------------------
| **Testtabellen**                                                                           |
|-----------|---------------------|----------|---------------------|-------------------------|
|                                                                                            | 
| *Beispiel 1:*                                                                              |
|    TF#    |                     |Verbrauch | Erwartetes Ergebnis | Beobachtung (True/False)|
|-----------|---------------------|----------|---------------------|-------------------------|
|     1     |                     |     -1   | "ungültige Eingabe" |            True         |
|     2     |                     |     0    |       0,7 ct        |            True         |
|     3     |                     |   5000   |        0,7 ct       |             True        |
|     4     |                     |   5001   |        0,5 ct       |             True        |
|     5     |                     |   15000  |        0,5 ct       |             True        |
|     6     |                     |   15001  |        0,3 ct       |             True        |
|     7     |                     |   15000  |        0,3 ct       |             True        |
|     8     |                     |   60000  | "Kein Privat Kunde" |             True        |
|                                                                                            | 
| *Beispiel 2:*                                                                              |
|    TF#    | Alter     | Gehalt              | Erwartetes Ergebnis| Beobachtung (True/False)|
|-----------|-----------|---------------------|--------------------|-------------------------|
|     1     |           |  2000 €             | MISSING ENTRY      |            True         | 
|     2     |    31     |  2000 €             | Gehaltzuschlag     |            True         | 
|     3     |    51     |  2000 €             |kein Gehaltzuschlag |            True         | 
|     4     |    29     |  2000 €             |kein Gehaltzuschlag |            True         | 
|     5     |    31     |  2501 €             |kein Gehaltzuschlag |            True         | 
|     6     |    31     |  2500 €             |kein Gehaltzuschlag |            True         | 
|     7     |    30     |  2000 €             | Gehaltzuschlag     |            False        | 
