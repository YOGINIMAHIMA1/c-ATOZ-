��    /      �  C           C     9   ]  o   �  B     m   J  ?   �  \   �  ;   U  P   �  [   �     >  @   A  N   �  J   �  D     d   a  �   �  :   a	     �	     �	     �	  0   �	     �	  5   
  	   ;
     E
  �   Z
  )     "   .  1   Q  <   �  &   �  A   �  ;   )     e  /   u  7   �  3   �  :     ;   L  $   �     �     �     �     �  2     �  :  @   �  >   7  I   v  ?   �  G      :   H  \   �  J   �  M   +  [   y     �  O   �  V   (  U     C   �  d     �   ~  3        @     X  !   a  9   �     �  1   �       "       8  !   @     b  ,   ~  �   �  &   3  G   Z  A   �     �  2   �  :   ,  ?   g  =   �  @   �  /   &  *   V  (   �     �     �  7   �           -                	   .          '                  
   !   ,                       )          &               #                         "           /                            %          (                $      *   +                --byte-subst=FORMATSTRING   substitution for unconvertible bytes
   --help                      display this help and exit
   --unicode-subst=FORMATSTRING
                              substitution for unconvertible Unicode characters
   --version                   output version information and exit
   --widechar-subst=FORMATSTRING
                              substitution for unconvertible wide characters
   -c                          discard unconvertible characters
   -f ENCODING, --from-code=ENCODING
                              the encoding of the input
   -l, --list                  list the supported encodings
   -s, --silent                suppress error messages about conversion problems
   -t ENCODING, --to-code=ENCODING
                              the encoding of the output
 %s %s argument: A format directive with a size is not allowed here. %s argument: A format directive with a variable precision is not allowed here. %s argument: A format directive with a variable width is not allowed here. %s argument: The character '%c' is not a valid conversion specifier. %s argument: The character that terminates the format directive is not a valid conversion specifier. %s argument: The format string consumes more than one argument: %u argument. %s argument: The format string consumes more than one argument: %u arguments. %s argument: The string ends in the middle of a directive. %s: I/O error %s:%u:%u %s:%u:%u: cannot convert %s:%u:%u: incomplete character or shift sequence (stdin) Converts text from one encoding to another encoding.
 I/O error Informative output:
 License GPLv3+: GNU GPL version 3 or later <%s>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
 Options controlling conversion problems:
 Options controlling error output:
 Options controlling the input and output format:
 Report bugs in the bug tracker at <%s>
or by email to <%s>.
 Try '%s --help' for more information.
 Usage: %s [OPTION...] [-f ENCODING] [-t ENCODING] [INPUTFILE...]
 Usage: iconv [-c] [-s] [-f fromcode] [-t tocode] [file ...] Written by %s.
 cannot convert byte substitution to Unicode: %s cannot convert byte substitution to target encoding: %s cannot convert byte substitution to wide string: %s cannot convert unicode substitution to target encoding: %s cannot convert widechar substitution to target encoding: %s conversion from %s to %s unsupported conversion from %s unsupported conversion to %s unsupported or:    %s -l
 or:    iconv -l try '%s -l' to get the list of supported encodings Project-Id-Version: libiconv 1.17-pre1
Report-Msgid-Bugs-To: bug-gnu-libiconv@gnu.org
PO-Revision-Date: 2022-02-13 16:52+0100
Last-Translator: Benno Schulenberg <vertaling@coevern.nl>
Language-Team: Dutch <vertaling@vrijschrift.org>
Language: nl
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
   --byte-subst=TEKST          vervanging voor onomzetbare bytes
   --help                      deze hulptekst tonen en stoppen
   --unicode-subst=TEKST       vervanging voor onomzetbare Unicode-tekens
   --version                   programmaversie tonen en stoppen
   --widechar-subst=TEKST      vervanging voor onomzetbare brede tekens
   -c                          onomzetbare tekens weglaten
   -f CODERING, --from-code=CODERING
                              de codering van de invoer
   -l, --list                  een lijst van ondersteunde coderingen tonen
   -s, --silent                meldingen van omzettingsproblemen onderdrukken
   -t CODERING, --to-code=CODERING
                              de codering van de uitvoer
 %s %s argument: Een formatteringscommando met een grootte is hier niet toegestaan. %s argument: Een formatteringscommando met variabele precisie is hier niet toegestaan. %s argument: Een formatteringscommando met variabele breedte is hier niet toegestaan. %s argument: Het teken '%c' is geen geldige omzettingsspecificatie. %s argument: Het teken dat het formatteringscommando afsluit is geen geldige omzettingsspecificatie. %s argument: De tekst verbruikt meer dan één argument: %u argument. %s argument: De tekst verbruikt meer dan één argument: %u argumenten. %s argument: De tekst stopt midden in een commando. %s: Invoer-/uitvoerfout %s:%u:%u %s:%u:%u: omzetting is onmogelijk %s:%u:%u: onvolledig teken of onvolledige shift-sequentie (standaardinvoer) Zet tekst om van één codering naar een andere.
 Invoer-/uitvoerfout Opties voor informatieve uitvoer:
 Dit is vrije software: u mag het vrijelijk wijzigen en verder verspreiden.
De precieze licentie is GPL-3+: GNU General Public License versie 3 of later.
Zie <%s> voor de volledige (Engelse) tekst.
Deze software kent GEEN GARANTIE, voor zover de wet dit toestaat.
 Opties voor omzettingsproblemen:
 Opties voor foutmeldingen:
 Opties voor de codering van in- en uitvoer:
 Rapporteer gebreken in het programma via <%s>
of via een e-mail aan <%s>;
meld fouten in de vertaling aan <vertaling@vrijschrift.org>.
 Typ '%s --help' voor meer informatie.
 Gebruik:  %s [OPTIE...] [-f CODERING] [-t CODERING] [INVOERBESTAND...]
 Gebruik:  iconv [-c] [-s] [-f VANCODE] [-t NAARCODE] [BESTAND...] Geschreven door %s.
 kan byte-vervanging niet omzetten naar Unicode: %s kan byte-vervanging niet omzetten naar de doelcodering: %s kan byte-vervanging niet omzetten naar een brede tekenreeks: %s kan Unicode-vervanging niet omzetten naar de doelcodering: %s kan breedteken-vervanging niet omzetten naar de doelcodering: %s omzetting van %s naar %s wordt niet ondersteund omzetting vanuit %s wordt niet ondersteund omzetting naar %s wordt niet ondersteund of:       %s -l
 of:       iconv -l Typ '%s -l' voor een lijst van ondersteunde coderingen. 