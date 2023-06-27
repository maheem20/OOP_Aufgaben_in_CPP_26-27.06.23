# OOP_Aufgaben_in_CPP_26-27.06.23

Aufgabe 1
● Teil 1: Klassen und Instanzen
Erstelle eine Klasse namens "Person" mit den Attributen "name" und "alter".
Definiere eine Methode innerhalb der Klasse, die "geburtsjahr_berechnen" heißt und das Geburtsjahr der Person anhand des aktuellen Jahres und des Alters berechnet.
Erstelle eine Instanz der Klasse "Person" mit einem beliebigen Namen und Alter.
Rufe die Methode "geburtsjahr_berechnen" für die erstellte Instanz auf und gib das Ergebnis aus.
● Teil 2: Vererbung und Polymorphismus
Erstelle eine Unterklasse von "Person" namens "Student" mit einem zusätzlichen Attribut "studienfach".
Definiere eine Methode innerhalb der Klasse "Student", die "studieren" heißt und eine Nachricht ausgibt, dass der Student gerade studiert.
Erstelle eine Instanz der Klasse "Student" mit einem beliebigen Namen, Alter und Studienfach.
Rufe die Methode "geburtsjahr_berechnen" für die Instanz aus Teil 1 auf und gib das Ergebnis aus.
Rufe die Methode "studieren" für die erstellte Instanz der Klasse "Student" auf und gib das Ergebnis aus.
____________________________________________________________________________________________________________________________________________________________________________

Aufgabe 2:
● Teil 1: Klassen und Methoden
  - Erstelle eine Klasse namens "Flugzeug" mit den Attributen "hersteller" und "modell".
    Definiere eine Methode innerhalb der Klasse "Flugzeug", die "starten" heißt und eine Nachricht ausgibt, dass das Flugzeug gestartet ist.
    Definiere eine Methode innerhalb der Klasse "Flugzeug", die "landen" heißt und eine Nachricht ausgibt, dass das Flugzeug gelandet ist.
  
  - Erstelle eine Klasse namens "Passagierflugzeug", die von der Klasse "Flugzeug" erbt.
    Definiere eine Methode innerhalb der Klasse "Passagierflugzeug", die "passagiere_anzeigen" heißt und die Anzahl der Passagiere im Flugzeug ausgibt.

  - Erstelle eine Klasse namens "Frachtflugzeug", die ebenfalls von der Klasse "Flugzeug" erbt.
    Definiere eine Methode innerhalb der Klasse "Frachtflugzeug", die "fracht_laden" heißt und eine Nachricht ausgibt, dass die Fracht geladen wird.

● Teil 2: Vererbung und Erweiterung

Erstelle eine Instanz der Klasse "Passagierflugzeug" mit einem beliebigen Hersteller, Modell und Anzahl der
Passagiere.
Rufe die Methode "starten" für die Instanz auf und gib das Ergebnis aus.
Rufe die Methode "passagiere_anzeigen" für die Instanz auf und gib die Anzahl der Passagiere aus.
Erstelle eine Instanz der Klasse "Frachtflugzeug" mit einem beliebigen Hersteller und Modell.
Rufe die Methode "landen" für die Instanz auf und gib das Ergebnis aus.
Rufe die Methode "fracht_laden" für die Instanz auf und gib das Ergebnis aus.
____________________________________________________________________________________________________________________________________________________________________________

Aufgabe 3:
Schreibe ein Python-Programm, das eine Kaserne repräsentiert und verschiedene Einheiten in den Bereichen Armee, Marine und Luftwaffe
verwaltet. Implementiere dazu die Klassen "Kaserne", "Streitkraft", "Armee", "Marine" und "Luftwaffe" gemäß den folgenden
Anforderungen:

● Die Klasse "Streitkraft" soll eine allgemeine Klasse für eine Streitkraft repräsentieren. Sie soll die Attribute "truppentypen" (eine Liste der

Truppentypen) und "staerke" (die Gesamtstärke der Streitkraft) besitzen. Zusätzlich soll die Klasse eine Methode
"einheiten_anzeigen" enthalten, die die Truppentypen und die Stärke der Streitkraft ausgibt.

● Die Klassen "Armee", "Marine" und "Luftwaffe" sollen von der Klasse "Streitkraft" erben. Jede dieser Klassen soll spezifische

Truppentypen und Stärken haben:
"Armee": Die Armee hat die Truppentypen ["Infanterie", "Panzer", "Artillerie"] und eine Stärke von 5000 Soldaten.
"Marine": Die Marine hat die Truppentypen ["Kriegsschiff", "U-Boot", "Marineinfanterie"] und eine Stärke von 2000 Soldaten.
"Luftwaffe": Die Luftwaffe hat die Truppentypen ["Kampfflugzeug", "Transportflugzeug", "Hubschrauber"] und eine Stärke von 3000
Soldaten.

● Die Klasse "Kaserne" soll eine Kaserne repräsentieren. Sie soll die Attribute "armee", "marine" und "luftwaffe" besitzen, die jeweils
Instanzen der Klassen "Armee", "Marine" und "Luftwaffe" sind. Die Klasse "Kaserne" soll eine Methode "einheiten_anzeigen" haben,
die die Einheiten in der Kaserne ausgibt, indem sie die Methode "einheiten_anzeigen" für jedes Teilstreitkraft-Objekt aufruft.
Implementiere das Programm gemäß den oben genannten Anforderungen. Erzeuge anschließend eine Kaserne mit einer Armee, einer
Marine und einer Luftwaffe. Rufe dann die Methode "einheiten_anzeigen" für die Kaserne auf, um die Einheiten in der Kaserne
auszugeben.Vergewissere dich, dass der Code fehlerfrei ausgeführt wird und die erwarteten Ausgaben generiert werden.
Hinweis: Kommentiere deinen Code ausführlich, um die Funktionalität jeder Zeile zu erklären.
____________________________________________________________________________________________________________________________________________________________________________

Aufgabe 4:
Erstellen Sie ein Bankprogramm zur Verwaltung von Privat- und Firmenkunden, Konten und Kreditkarten. Das Programm soll die folgenden Anforderungen
erfüllen:

● Implementierung der Klassen:

Adresse: Eine Klasse zur Darstellung einer Adresse mit den Attributen Straße, Hausnummer, PLZ und Stadt.
Konto: Eine Klasse zur Darstellung eines Bankkontos mit den Attributen Kontonummer und Guthaben. Die Klasse soll Methoden zum Einzahlen und Abheben
von Geld implementieren.
Kreditkarte: Eine Klasse zur Darstellung einer Kreditkarte mit den Attributen Kartennummer und Limit. Die Klasse soll Methoden zum Aufladen und Bezahlen
implementieren.
Kunde: Eine abstrakte Klasse zur Darstellung eines Kunden mit den Attributen Name und Adresse. Die Klasse soll Methoden zum Anlegen von Konten und
Hinzufügen von Kreditkarten implementieren.
Privatkunde: Eine Unterklasse von Kunde, die einen Privatkunden repräsentiert.
Firmenkunde: Eine Unterklasse von Kunde, die einen Firmenkunden repräsentiert.

● Implementierung der Klasse Bank:

Die Klasse Bank soll eine Liste von Kunden verwalten.
Sie soll Methoden zum Hinzufügen von Kunden, Suchen nach Kunden anhand der Kontonummer und Anzeigen einer Kundenübersicht implementieren.

● Implementierung des Bankmenüs:

Das Programm soll ein interaktives Menü bereitstellen, das dem Benutzer verschiedene Optionen bietet:
Kundenübersicht anzeigen: Zeigt eine Liste aller Kunden mit ihren Konten und Kreditkarten an.
Konto erstellen: Ermöglicht das Erstellen eines neuen Kontos für einen Kunden.
Konto einzahlen: Ermöglicht das Einzahlen von Geld auf ein vorhandenes Konto.
Konto abheben: Ermöglicht das Abheben von Geld von einem vorhandenen Konto.
Kreditkarte hinzufügen: Ermöglicht das Hinzufügen einer Kreditkarte zu einem vorhandenen Konto.
Kreditkarte aufladen: Ermöglicht das Aufladen einer vorhandenen Kreditkarte.
Kreditkarte bezahlen: Ermöglicht das Bezahlen mit einer vorhandenen Kreditkarte.
Beenden: Beendet das Programm.
● Implementierung der Eingabe/Ausgabe:

Das Programm soll den Benutzer zur Eingabe von Informationen auffordern und Feedback über den Status der ausgeführten Aktionen geben.

● Bitte beachten Sie, dass die Implementierung von Fehlerbehandlung und Datenvalidierung optional ist und je nach Ihrem Kenntnisstand und Ihren Anforderungen

hinzugefügt werden kann (Ist die Kontonummer 10 Nummernzeichenlang?, Ist die Postleitzahl eine 5 Stellige Zahl etc.) .
