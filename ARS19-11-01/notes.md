---
title: Notizen
date: 1. November 2019
---

Anwendungsentwicklung
=====================


Arbeitsblatt
------------

### Aufgabe 1

**a)**

- Name
- KundenNr
- zeigeDaten()

**b)**

- Name
- zeigeDaten()
- mitarbeiterNr
- einstellungsDatum
- einstellen()
- *Ist einer Firma zugeordnet*

**c)**

- mitarbeiterNr
- einstellungsDatum
- gehalt
- kündigen()
- einstellen()
- *Ist einer Firma zugeordnet*


Vernetzte IT-Systeme
====================

Aufgabe der Schicht 4: Transportschicht
---------------------------------------

- Abrundung der transportorientierten Schichten
	- Umwandlung einer Endsystem zu Endsystem Verbindung in eine logische Verbindung
		- Der Nutzer vor seinem Endsystem bekommt das Gefühl, dass er dauerhaft mit seinem Kommunikationspartner verbunden ist
		- Real is es aber so, dass auf der Ebene der Schicht 4 nur dann eine Verbindung aufgebaut wird, wenn Daten zur Übertragung anstehen!

- Bereitstellen von Informationen für die anwendungsorientierte Schichten, für welchen Dienst/Protokoll/Anwendung (Über Portnummer) Daten in dem Packet enthalten sind.
- Einleitung von Fehlerkorrekturmaßnahmen bei Feststellung von Übertragungsfehlern
- Sicherstellung der Sortierung der empfangenen Segmente in der korrekten Reihenfolge
- Bezeichnung der Datenpakete auf Ebene der Schicht 4: Segment
- Verwaltung paralleler Prozesse durch Entkopplung von Daten und Programmen

Aufgaben der Schicht 5: Sessionlayer
------------------------------------

- Hauptaufgaben:
	- Auf- & Abbau einer Verbindung durch Anmelden am bzw. Abmelden vom Netzwerk
		- Eröffnung einer Kommunikationssitzung durch Anmelden am Netzwerk
	- Dialogsteuerung


Aufgaben der Schicht 6: Darstellungsschicht
-------------------------------------------

- Hauptaufgaben: 
	- Gleiche Darstellung von Zeichen an allen Endgeräten
	- Umwandlung von Zeichen in Maschinencode
	- Komprimierung von Daten
	- Verschlüsselung von Daten
	
Aufgaben der Schicht 7: Application Layer
-----------------------------------------

- Hauptaufgaben:
	- Bietet die Kommunikationsschnittstellen zwischen Benutzer und Anwendungsprogramme
zwanzig


DoD-Modell
==========
|OSI-Modell   |DoD-Modell        | TCP/IP | UDP/IP |
|-------------|------------------|--------|--------|
|7 Anwendung  |Anwendungsschicht |HTTP(s) |DNS     |
|6 Darstellung|                  |SMTP    | RADIUS |
|5 Session    |                  |...     | ...    |
|-------------|-------–----------|--------|--------|
|4 Transport  |Transportschicht  | TCP    |UDP     |
|-------------|-------–----------|--------|--------|
|3 Vermittlung|Netzwerkschicht   |IP-Protokoll|
|-------------|-------–----------|--------|
|2 Sicherung  |Netzzugangsschicht|Technische Verbindung: |
|1 Bittübertragungsschicht|      | ATM; Ethernet; PPP ...|
