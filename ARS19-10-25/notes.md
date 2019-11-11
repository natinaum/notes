---
title: Notizen
date: 25. Oktober 2019
---

Vernetzte IT Systeme
====================

Schicht2: DataLink Layer
------------------------

-> Siehe letzte Woche

### Fehlererkennung bei der Übertragung von Daten
- Maßnahmen: 
	- Einsatz von Prüfsummen
		1. Sender errechnet eine Prüfsumme über den Schicht 2 Frame
			- Eintrag der Prüfsumme in den Schicht 2 Trailer
		2. Empfänger errechnet eine Prüfsumme über den Schicht 2 Frame mit dem selben Algorythmus erneut und vergleicht seine mit der aus dem Trailer vom Sender
		- Eigentliche Fehlerkorrekturmaßnahmen geschehen erst in Layer 4!

### Zugriffssteuerung
- Klärung zwischen Sender & Empfänger, wer wann auf das Medium der Schicht 1 Bitübertragungsschicht zugreifen darf
	- Abhängig vom Medium (Simplex, Duplex oder Vollduplex)

### Flusssteuerung
- Klärung zwischen Sender u. Empfänger mit welcher Geschwindigkeit Daten zwischen beiden ausgetauscht werden können.
	- Betrifft vor allem Verbindungen zwischen Knoten welche unterschiedliche Geschwindigkeiten können. BSP:
		- Netwerkkarte mit 10 MBit/s
		- Netwerkkarte mit 100 MBit/s
		- Netwerkkarte mit 1000 MBit/s
		- ...

### Adressierung der Frames mithilfe der MAC Adresse
- MAC = Media Accress Control
- Länge: 48 Bit
	- 24 Bit Hersteller ID
	- 24 Bit Geräte ID
- Weltweit eindeutig
- In ROM Chip der Netzwerkkarte gespeichert
- addressiert immer nur nächsten erreichbaren Knoten
- bildet die physikalische Adresse eines Knoten


Schicht 3: Vermittlungsschicht
==============================

- Hauptaufgabe: Wegewahl/Routing
- Bezeichnung der Pakete der Schicht 3: "Datagramm"
	- Routing ermöglicht den Austausch von Daten von Endsystem zu Endsystem
		- Ermöglicht den Transport von Datagrammen von einem IP Netzwerk in ein anderes IP Netzwerk und die genaue Zustellung an den korrekten Zielrechner
			- Vorraussetzung: Die Vermittlungsknoten (Router) müssen Infos über die angeschlossenen Netze zu haben und es müssen eindeutige Netzaddressen vorhanden sein
	- Aufgrund der Schicht 3 Adresse (IPv4/v6) ist die Schicht in der Lage zu entscheiden, in welches Teilnetz ein Datagram vermittelt wird!


PoWi
====


