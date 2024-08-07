��    /      �  C           C     9   ]  o   �  B     m   J  ?   �  \   �  ;   U  P   �  [   �     >  @   A  N   �  J   �  D     d   a  �   �  :   a	     �	     �	     �	  0   �	     �	  5   
  	   ;
     E
  �   Z
  )     "   .  1   Q  <   �  &   �  A   �  ;   )     e  /   u  7   �  3   �  :     ;   L  $   �     �     �     �     �  2     0  :  �   k  s   �  �   b  q     �   �  r   <  �   �  h   3  �   �  �   &     �  �   �  �   J  �   �  �   �  �   &  �  �  Y   �  *   "     M  4   V  k   �     �  w   
  &   �  !   �  �  �  n   e  c   �  h   8  �   �  W   e   �   �   n   I!     �!  d   �!  y   1"  m   �"  t   #  �   �#  S   $  M   s$  M   �$     %     !%  �   4%           -                	   .          '                  
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
PO-Revision-Date: 2022-02-13 12:49+0200
Last-Translator: Yuri Chornoivan <yurchor@ukr.net>
Language-Team: Ukrainian <trans-uk@lists.fedoraproject.org>
Language: uk
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=4; plural=n==1 ? 3 : n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2;
X-Generator: Lokalize 20.12.0
   --byte-subst=РЯДОК_ФОРМАТУВАННЯ заміна непридатних до перетворення байтів
   --help                      показати ці довідкові дані і завершити роботу
   --unicode-subst=РЯДОК_ФОРМАТУВАННЯ
                              заміна непридатних до перетворення символів Unicode
   --version                   показати дані щодо версії і завершити роботу
   --wide-subst=РЯДОК_ФОРМАТУВАННЯ
                              заміна непридатних до перетворення «широких» символів
   -c                          викидати символи, непридатні до перетворення
   -f КОДУВАННЯ, --from-code=КОДУВАННЯ
                              кодування вхідних даних
   -l, --list                  показати список підтримуваних кодувань
   -s, --silent                придушити повідомлення щодо проблем під час перетворення
   -t КОДУВАННЯ, --to-code=КОДУВАННЯ
                              кодування вихідних даних
 %s Аргумент %s: тут не можна використовувати команду форматування з визначенням розміру. Аргумент %s: тут не можна використовувати команду форматування з визначенням точності змінної. Аргумент %s: тут не можна використовувати команду форматування з визначенням ширини змінної. Аргумент %s: символ «%c» не є коректним символом визначення перетворення. Аргумент %s: символ, що перериває команду форматування не є коректним символом визначення перетворення. Аргумент %s: слід вказати декілька аргументів, а саме %u аргументів. Аргумент %s: слід вказати декілька аргументів, а саме %u аргументів. Аргумент %s: слід вказати декілька аргументів, а саме %u аргументів. Аргумент %s: слід вказати декілька аргументів, а саме %u аргументів. Аргумент %s: завершення рядка посередині команди. %s: помилка вводу-виводу %s:%u:%u %s:%u:%u: не вдалося перетворити %s:%u:%u: незавершений символ чи послідовність зміни регістру (стд. ввід) Перетворює текст у одному кодуванні на текст у іншому кодуванні.
 помилка вводу-виводу Показ інформації:
 Умови ліцензування викладено у GPLv3+: GNU GPL версії 3 або новішій, <%s>
Це вільне програмне забезпечення: ви можете вільно змінювати і поширювати його.
Вам не надається ЖОДНИХ ГАРАНТІЙ, окрім гарантій передбачених законодавством.
 Параметри керування обробкою помилок під час перетворення:
 Параметри керування показом повідомлень про помилки:
 Параметри керування форматом вхідних та вихідних даних:
 Про вади слід повідомляти за допомогою системи стеження за вадами: <%s>
або електронною поштою на адресу <%s>.
 Щоб дізнатися більше, віддайте команду «%s --help».
 Використання: %s [ПАРАМЕТР...] [-f КОДУВАННЯ] [-t КОДУВАННЯ] [ФАЙЛ ВХІДНИХ ДАНИХ...]
 Використання: iconv [-c] [-s] [-f з_кодування] [-t у_кодування] [файл ...] Автор — %s.
 не вдалося перетворити замінник байтів у символ Unicode: %s не вдалося перетворити замінник байтів у кодування призначення: %s не вдалося перетворити замінник байтів у «широкий» рядок: %s не вдалося перетворити замінник unicode у кодування призначення: %s не вдалося перетворити замінник «широкого» символу у кодування призначення: %s підтримки перетворення з %s у %s не передбачено підтримки перетворення з %s не передбачено підтримки перетворення у %s не передбачено або:    %s -l
 або:   iconv -l список кодувань, які підтримуються програмою, можна отримати командою «%s -l» 