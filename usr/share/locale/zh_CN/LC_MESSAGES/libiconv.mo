��    /      �  C           C     9   ]  o   �  B     m   J  ?   �  \   �  ;   U  P   �  [   �     >  @   A  N   �  J   �  D     d   a  �   �  :   a	     �	     �	     �	  0   �	     �	  5   
  	   ;
     E
  �   Z
  )     "   .  1   Q  <   �  &   �  A   �  ;   )     e  /   u  7   �  3   �  :     ;   L  $   �     �     �     �     �  2     �  :  :     7   L  b   �  :   �  ]   "  :   �  O   �  4     C   @  M   �     �  8   �  ;     ;   J  4   �  G   �  =     ,   A     n     �     �  .   �     �  4   �          -  �   <     �     
  #   (  �   L  .   �  B   !  I   d     �  -   �  1   �  1      :   R  7   �     �     �     �          $  2   5           -                	   .          '                  
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
PO-Revision-Date: 2022-02-13 11:40-0500
Last-Translator: Boyuan Yang <073plan@gmail.com>
Language-Team: Chinese (simplified) <i18n-zh@googlegroups.com>
Language: zh_CN
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=1; plural=0;
X-Generator: Poedit 2.4.3
   --byte-subst=FORMATSTRING   替代不可转换的字节
   --help                      显示此帮助并退出
   --unicode-subst=FORMATSTRING
                              替代不可转换的 Unicode 字符
   --version                   显示版本信息并退出
   --widechar-subst=FORMATSTRING
                              替代不可转换的宽字符
   -c                          忽略不可转换的字符
   -f ENCODING, --from-code=ENCODING
                              输入编码
   -l, --list                  列出支持的编码
   -s, --silent                不显示有关转换出错的信息
   -t ENCODING, --to-code=ENCODING
                              输出编码
 %s %s 参数: 此处不允许用含大小的命令格式。 %s 参数: 此处不允许用可变精度的命令格式。 %s 参数: 此处不允许用可变长度的命令格式。 %s 参数: 字符‘%c’不是有效的转义符。 %s 参数: 用于终止命令格式的字符不是有效的转义符。 %s 参数: 格式字符串需要更多的参数: %u 参数。 %s 参数: 字符串在命令中部终止。 %s: 输入/输出错误 %s:%u:%u %s:%u:%u: 无法转换 %s:%u:%u: 不完整的字符或者替换序列 (标准输入) 将文本从一种编码转换成另一种编码。
 输入/输出错误 输出信息:
 授权 GPLv3+: GNU GPL 第三版或后续版本 <%s>
此软件为自由软件：您可对其自由修改并重新发布。
在法律所允许的范围内不做任何担保。
 控制字符转换的选项:
 控制错误输出的选项:
 控制输入输出格式的选项:
 请将软件错误提交至 bug 跟踪系统 <%s>
或发送电子邮件到 <%s>。
请将翻译错误报告至简体中文邮件列表 <i18n-zh@googlegroups.com>。
 尝试‘%s --help’以获得更多信息。
 用法: %s [OPTION...] [-f ENCODING] [-t ENCODING] [INPUTFILE...]
 用法：iconv [-c] [-s] [-f 输入编码] [-t 输出编码] [文件 ...] 由 %s 编写。
 无法将欲替换字节转换成 Unicode: %s 无法将欲替换字节转换成目标编码: %s 无法将欲替换字节转换成宽字符串: %s 无法将欲替换 unicode 字元转换成目标编码: %s 无法将欲替换的宽字符转换成目标编码: %s 不支持从 %s 转换到 %s 不支持从 %s 进行转换 不支持转换到 %s 或者: %s -l
 或：  iconv -l 尝试用‘%s -l’获取所支持的编码列表 