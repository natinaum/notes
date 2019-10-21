---
title: Notizen
date: 18. Oktober 2019
---

Vernetzte IT Systeme
====================

Topologie
---------

Beschreibt die Art und Weise wie Netzknoten physikalisch untereinder verbunden werden.

### Grundtypen:
- Baumtopologie (hierarchische Struktur, ausgehend von einem zentralen Knoten, verzweigend in die unteren Ebenen)
- Ringtopologie
- Bustopologie (Empfindlich gegen Teilausfälle)
- Sterntopologie (Empfindlich gegen Teilausfälle)
- Maschentopologie (Wenn jeder Knoten mit jedem anderen verbunden ist spricht man vom "vollständigen Graphen")

### Abhängig von der Topologie spricht man von:
- Diffusionsnetze
	- Bustopologie
- Teilstreckennetze
	- Ringtopologie
	- Baumtopologie
	- Sterntopologie
	- Maschentopologie


ISO-OSI Referenzmodell
----------------------
OSI stands for Open System Interconnect. Das OSI-Modell beschreibt das Kommunikationsverhalten in offenen Netzwerken in seinen einzelnen Funktionen. Es definiert Komponenten der Datenkommunikation.

### Schichtmodel des OSI-Modells:

|NR| Deutsche Bezeichnung          | Englische Bezeichnung|
|--|-------------------------------|----------------------|
|  |**Transportorientiert:** |
|*0.*| *Infrastruktur*                | *infrastructure*       |
|1.| Bitübertragungsschicht        | physical Layer       |
|2.| Sicherungsschicht             | Datalink Layer       |
|3.| Vermittlungsschicht           | Network Layer        |
|4.| Transportschicht              | Transport Layer      |
|  |**Anwendungsorientiert:** |
|5.| Sitzungsschicht               | Session Layer        |
|6.| Darstellungsschicht           | Presentation Layer   |
|7.| Anwendungsschicht             | Application Layer    |
|*8.*| *Anwender*                      | *User*                |

*Inoffiziel*

### Aufgaben der jeweiligen Schichten
- Schicht 1 - Physical Layer
	- Sie ist zuständig für den physikalischen Transport der Daten.
	- Sie benötigt keine Protokolle oder Dienste
	- In dieser Schicht geregelt:
		- physikalische Verbindung (Definition der Kabel, Stecker, Dosen, Netzwerkkarten etc.) zwischen Sender und Verbinder
		- Kodierung der Bits
		- Impulsdauer u. Takt zur Unterscheidung zweier gleicher Informationen (00 11)
		- Empfang-/Sendebereitschaft
			- Simplex
			- Duplex
			- Vollduplex
		- Definition der Schnittstellen

- Schicht 2 - Datalink Layer
	- Hauptaufgaben:
		- Absicherung der Datenbits und Fehlererkennung
		- Adressierung der Netzknoten
	- Bezeichnung der Datenpakete der Schicht 2: Frames - Datenrahmen
	- 2 Typen von Schicht2-Protokollen:
		1. Frames mit fester Länge:
			- Nur Header, Keine Trailer
			- Frames müssen aufgefüllt werden
			- Variante 1: Frames mit Inhalt 8 Datenbits
				- Nachteil:
					- Übertragung massenhaft Headerinfos
				- Vorteil 
					- wenige Wiederholsendungen
			- Variante 2: Frames mit Inhalt 1024 Datenbits
				- Vorteil:
					- weniger Overhead
				- Nachteil:
					- erhöhte Anzahl an Wiederholungen
		2. Frames mit variabler Länge
			- Header und Trailer
			- Mehr Overhead durch Trailer
			- Keine zusätzliche Belastung durch Auffühlung von zu kurzen Frames
			- MTU gibt maximale Framegröße an -> 1500 standartmäßig


PoWi
====


