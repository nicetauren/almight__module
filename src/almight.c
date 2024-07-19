#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("nicetauren");
MODULE_DESCRIPTION("When a memory bug is detected, Almight apears.");

static char **almight =
"              *.          ..   *        . :.     . .@.  .       .. .............. 
"   ..-:.          +@@. *#.:@-%: @@  .@. # @... -@@@@ .%  .@@@@@@******##*#*######.
" --::::::----:  +@:    ..=-*.%#+-.@  .@ . -..:@@@@  .  %@@@@+  @@%###***#********.
" ::::.::::::..:.. ...%@-    **==@@#@@  @ .@.@@%@    @@@@@=.....  @@@#*#*#*######*.
" ...........:: %-#@@-..:+@@.  # .## @#*.+=@@+-@@@@@@@@@#  .@@@=:.  @#############:
" :::...........@.  @#-@@: ..:...      ..*@+. +@@%@%%%%@@@:    @@@..@#*#*########*:
" .::..       @.-#.  @%. ..:::::::::::::. ++=:*@@%@%%@%@@@@ ...  %@@ %########*###:
" .....=@@@@@#   ..@@# .:-::::::::::::::..%#*.#@%%%@%%%@@@@-.-.@-  :@@@***########:
" ..:..-#+#@@: @@@ @  ::::::::::::::-:::. %%+.%@%%%%%%@%@@@# ...@.  . @*@#########:
" :....     @@%@ -@@ .:::::::::::::*.:::: %%+.%@%@@@@@@@%@@@:.:: @@*  #%*#########:
"           .-...+@@=..::::::::::::.@ .:: %#+.@@@@@@@@@@@@@@% .-. .*@=@@%#########:
" #@%=...+%@:.. @% %@=    ..:::::-:.@@ .: %#+.@@@@@%@@@@@@@@@# --.:@..:###########:
" @::@@@@@@@%. +@  .@..%@@#%  :::::. @ : .%@+.@@%%@@@@@. .  *@  :. @%..@@*#%######:
"       .@@@  @+: . .-:= * .#*@-     *@@  #+@ @@@@@@.   :  -  .. .  @@. @*#####%##:
" :%+    @@  @.@-.@@@@#@@@@  - .+@@@%-@@@ +*@+@-  . . .%-@@@@@@@%..=@@@-@*########:
"          .@  - ..     *@@@@ .   -. % %@+=@:*  .. *-@@@@@@@@@@% .. @@@@%#########:
" @@@@@@@@@@  @ :------:  @@@@@@@+.:   ..-.- = *#@@@@@@@@@@@#.= .:-. @# @@@%######:
"=@@@@@%@@@  @@ -::::::-:  =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-* .--= @@@- .@%#####:
":#####%@@=-@@: ---------:.   %%@%*:   -  . @@@@@@@@@@@@@@@@@@%:..-: @@  . @@#####-
":#####@   :@@..----:-:----::.     ...*..-@ @@@@.   .+@@@@@@@@@@. :. @  @@. @#%###:
":####@@ @=  @..::---------------::-:::: :@.@@@@@+:+=-: -@@@%@@@= +=.. @@@* @####%:
":##%#@# @@  .@+* .--------------:-::--- -%.@@@@@@:-**=:*@@@@@@@*:@@  =@*-. @####%:
":%%#%@: @.@    @=  :----------:-..-:.   .- @@@@@@@.=#+.@@@@@@@@@@*@ @@@ @# @%####-
":*+#%@ . -@%@:..@@    .:-------= @.  @@@@.@@@@@@@@@.+.%@@@@@@@@@@*@ @@@@@+ @@%###-
"*@@%*@ ..@@+ .:  @@@@@.:------::%@@@@@@@@@@@@@@@@@@:  @@@@@@@@@@@@*  @@ @  @###%%=
"  +%#@  :@#@...:  @@@..-:. . =::.    +.@@@@@@@@@  @@@@@@@@@@@@@@@*  @@@@  @@##@@# 
"#@@%%@@  %@=@@ ::. @@ ..  @@.=+::--:. +* @@@@@ :--..#@@@@@@@@@@@=  :@@@  @@@%@@:*.
".@%%##@@% -@@@ :-: @@  .@@             .*-:=%%@@@@@@@@@@@@@@@@%= . @@@  .  @@@-.@ 
" %%%%@@  +    @.-- @@ @@@@@@@@@@@@@@@@@@@@@@+             @@@@#%.. %   @@.  *@=-* 
" *@@@@  @=@   @ :- +@ =@@                     .       ##@@@%@@%%.. @ @ *@@%.   .. 
" -@@  #%.  @@@@ :-. @  :@@@@@@@@@@# .......... @@@%#.@  %@@@@@%*+. @@@ : %@@@@@@+.
" :. :@....*@@@@ .-: @..  @@@@       ..........        @@@@@@@@@*#. @@@  @  @=. .: 
" #@@@.  +*@#.#@* :: @@ .. #@ @@@@.    ........    +@@@ .@@@@@@@**  @@@# @@ ...@-. 
" *%@  .@%@@ @.@@ -. @@-.-.  @   .+@@@.         @*.   @@@@@@@@@%%-  @@@@ @@@@... .-
" @   #%-@++ -@*@ -..@##. :-  *+-=-.  .-::==-:.   %@@@@@@@@@@@@@%. .@@@@ :@@@@@@@: 
"   %@=@+*@.. :@@. : @@@@: .-::::---=-@@@@@*+=@@@@@@@@@@@@@@@@@@@  +@@@@  @@@@@@@@@
" @%*#@@@=@.%-..@@  .  @@@@ .:------::.  .@@@@@@@@@@@@@@@@@@@@@@   @@%@@@ @@@:     
".%=%-+:.-@ .@: %@@@     #@@: ::--------: =+:#@@@@@@@@@@@@@@@@@  #@@@@@@@  @@@@@-  
" #@@@%.%@+   @#.@.@@@@     @@.::-------- **@@@@@@@@@@@@@@@@*  @@@@@@@@@@- @@@@@@@@
" -.*%+-.@. .   :@@=.-@@@@    =@--------- %**@@@@@@@@@@@@@   @@@@@@@@@@@@@ =@@@@@@=
" .%+:*@@@  ...   @*@@..-@@@*   .------.: #+##%@@@@@@@@:  #@@@@@@@@@@@@@@@  -  :=: 
":@@..@@=.  ....  %*::-@@*.=@@@=   .:---:@@@@@@@@@@@=   @@@@@@@@@@@@@@@@@@@#@==@@# 
" =#:.+@@@@@      #@:==.:.*@+ #@@@*                 .@@@@@@@@@@@@@@@@@@@@@@++@=#@# 
" +#.. +%##%@@@    *@-+-%.@#*@:.%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:%###+ 
"  .  *%+##**#%@@@@@+.= -   *@@*- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#-#.:+" 
"@@@ *@##**##***####@@@@@=    @@@%:.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%:* +" 
"%@@#+=========-==+.*#####        ..  *%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%@@@@#";

static void print_almight(void)
{
	pr_info(almight);
	pr_info("\n\nMo Daijo, Najete? Watasi Ga Kita!\n");
}

static int __init almight_init(void)
{
	print_almight();

	return 0;
}

static void __exit almight_exit(void)
{
	pr_info("bye\n");
}

module_init(almight_init);
module_exit(almight_exit);
