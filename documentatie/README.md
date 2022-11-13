# Gevorderde Algoritmen documentatie

## Toolchain

Voor het vak Gevorderde Algoritmen maken we gebruik van de volgende elementen:

- GCC 11
- CMake
- Visual Studio Code
- De C/C++ en CMake extensies van VSCode
- De Live Share extensie van VSCode

### Installatie

Volg de installatie instructies van jouw besturingssysteem om alle tools te installeren
die je nodig hebt voor dit vak:

* [Installatie-instructies op Windows](setup/SETUP.windows.md)
* [Installatie-instructies op Ubuntu](setup/SETUP.ubuntu.md)
* [Installatie-instructies op Mac](setup/SETUP.mac.md)

### Over de tools

#### Visual Studio Code

**Visual Studio Code** (kortweg: **VSCode**) is een gratis, moderne broncode-editor die met behulp van 
extensies kan worden uitgebreid tot een krachtige <abbr title="Integrated Development Environment">IDE</abbr>.

VSCode biedt ook een extensie [**Live Share**](https://marketplace.visualstudio.com/items?itemName=MS-vsliveshare.vsliveshare) aan 
die het mogelijk maakt om code, terminals, debugging sessies en meer online met elkaar te delen.
We zullen hiervan gebruik maken voor online pair-programming en ondersteuning tijdens labo's.

#### CMake

**CMake** is een populair *build automation* systeem voor C++ (zoals *Maven* en *Gradle* 
populaire systemen zijn voor Java). Het verzorgt het juist compileren, linken en uitvoeren 
van C++ programma's.

We kiezen ervoor om CMake in deze cursus te gebruiken vanwege de goede integratie in VSCode.
Ook andere IDE's zoals *CLion* en *Visual Studio* hebben goede ondersteuning voor *CMake*-projecten.

### GCC

De **GNU Compiler Collection** (kortweg: **GCC**) is een van de meest populaire gratis compilers voor C en C++.

De GCC compiler kan zo geconfigureerd worden dat het extra *run-time instrumentation* toevoegt aan de programma's die 
het compileert. Deze *instrumentation* voegt doorheen het programma extra routines toe om bijvoorbeeld de code te *profilen* 
(analyseren welke code-paden de meeste CPU-tijd verbruiken).
In deze cursus maken we ook gebruik van de [**AddressSanitizer**](https://github.com/google/sanitizers/wiki/AddressSanitizer).
Deze *sanitizer* helpt bij het opsporen van veelvoorkomende programmeerfouten zoals 
[*buffer overflows*](https://en.wikipedia.org/wiki/Buffer_overflow) 
en [*use-after-free*](https://en.wikipedia.org/wiki/Dangling_pointer).

Een voorbeeld van de fouten die de *AddressSanitizer* kan detecteren vind je in het bestand `test/test.cpp` van de *smoke test*.
Lees de commentaar in dat bestand om te leren hoe je deze *run-time instrumentation* kan activeren in `CMakeLists.txt`.

## Veelgestelde Vragen (FAQ)

### Er gebeurt niets wanneer ik een breakpoint wil toevoegen door in de linkerzijbalk te klikken.

Controleer of de C/C++ extensie correct is geinstalleerd **terwijl VSCode verbonden is met je Ubuntu-installatie in WSL**.

### Waar kan ik de bestanden uit gewone Windows-folders terug vinden in WSL?

In Ubuntu op WSL is je `C:\`-schijf gemount onder `/mnt/c/`.

### Intellisense raporteert veel fouten zoals `identifier "​​" is undefined` and `expected a ';'`

Je bronbestand bevat waarschijnlijk een ongeldig onzichtbaar karakter. Je kan deze karakters terugvinden met `cat -v <bestandnaam>`.

## Meer documentatie

* [C/C++ in Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)
* [CMake in Visual Studio Code](https://code.visualstudio.com/docs/cpp/cmake-linux)
* [Debugging in Visual Studio Code](https://code.visualstudio.com/docs/editor/debugging)
