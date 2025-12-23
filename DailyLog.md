# c-learning

This is a repository for my C programming learning practice projects
Day 1: 
    -Learning how to use Github
    -Learning how to use GitHub using Git
    -Created A simple "hello.c" file that prints "Hello, GitHub!" and placed them in the "First Program" folder
    -Learned about directives
        These are things like #include. Directives are things that the precompiler needs to know before compling the program. Such as #include <stdio.h> includes standard input/output for various things such as printf.
    -Learned about statements
        Basically commands.
        Each command must end with a ; to mark the end of that command for it to move onto the next command.
    -Learned about printf
        Printf must include the new line character \n or elses the program will continue to output on the same line.
        A single printf statement can carry multiple \n to print on multiple lines.
    -Learned about comments
        Written like /* This is a comment */
        They can also span multiple line such as:
            /*This is
            also a 
            comment*/
        To make a single line comment, it can be formed like this
            // This is a comment

Day 2:
    -Learned about Types
        Each variable must have a type
            int:
                stored as a whole number
            float:
                stored as a decimal point value
    -learned about declaration
        Variables must be declared such as:
            int hight;
            float profit;
        Can declare varibles of the same type at the same time such as:
            int hight, length, width, volume;
            float profit, loss;
    -Learned about assignment
        variables must be delcared first
        EX:
            int height, length, width;
            float profit;

            height = 8;
            length = 12;
            width = 10;
            profit = 2150.48f;

        It is good practice to include an "f" when assigning a variable.
        assigning variables this way makes them constant
        Can compute a variable as such:
            volume = height * length * width; // volume is now 960
    -Learned how to print values
        Use placeholders within a lateral string followed by the variable after.
        To print "Height: *h*":
            printf("Height: %d\n", height);
        placeholders:
            %d is used for whole numbers
            %f is used for floats
                to format floats:
                    %.2f
                        This will format 1.4567 -> 1.45 
        Can print multiple varibles such as:
            printf("Height: %d\nLength: %d\n, height, length")
        You can print with expressions as well such as:
            printf("Volume: %d\n, height * length * width")

    -Learned about Initialization
        You can initizalize a variable as you delcare it such as:
            int height = 8, length = 12, width = 10;

    -Learned about scanf to read user input
        scanf(%d, &height) //reads a user inputted integer and stores it into height
        scanf will automatically move the cursor to the next line, so a \n character is not needed
    -Learned about defining names for constants
        CONVENTION:
            Definitions are create with all uppercase letters so it stands out
            Definitions should never be altered
        Can be done like:
            #define FREEZING_PT 32.0f
            #define SCALE_FACTOR (5.0f / 9.0f)
        Does not require semi colons at the end like #include
        If it includes oporators, incase it with ()
    -Learned about identifiers
        These are the names we give variables.
        Identifiers must begin with a letter or an underscore.
        identifiers can also contain numbers, but cannot start with them
        There are also universal character names that cannot be used
        C is also case-sensitive
    -Learned about formatting numbers in printf
        %d
            Will print the number normally
            40
        %5d 
            Will print the number with a minimum of 5 characters
            |   40|
        %-5d
            Will print the number with 3 empty spaces after
            |40   |
        %5.3d
            Will print the number with a minimum of five characters with a minimum of 3 digits.
                40 would look like |  040|
        %10.3f
            Displays using 10 characters overall with 3 digits after the decimal point
            |    839.210|
        %10.3e
            Displays using 10 characters overall with 3 digits after the decimal point in scientific notation
            | 8.392e+02|
        %-10g
            displays either fixed decimal or exponential form using 10 characters overall
            |839.21     |
    -Learned about escape sequences
        \a
            Alert (bell)
        \b
            Backspace
        \n
            Newline
        \t
            Tab
        To make " " appear in a print output, it must be escaped with a \
            EX
                printf("\"Hello!\"\n");

Day 3:
    -Created a program that takes 2 fractions from the user and adds them together and prints the sum
    -Learned about how C handles arithmitic operations
        +
            Addition
        -
            Subtraction
        *
            Multiplication
        /
            Division
        %
            Remainder
            is two ints are divided, c will round down the number
                EX: 1/2=0 NOT 1/2=.5
                at least one number must be a float
    -C follows PEMDAS Rules
        i + j * k is the same as i * (j * k)
            General rule is to always use parentheses for easy reading
    -Learned about compound assignment
        i += 2 is the same as i = i + 2
    -Learned about increment and decrement operators
        i = 1;
        printf("i is %d\n", ++i); //This pre-increments i and prints 2
        printf("i is %d\n", i);   //This still prints 2

        i = 1;
        printf("i is %d\n", i++); //This post-increments i and prints 1
        printf("i is %d\n", i);   //This prints 2

        This is the same for --i and i--
    -Learned about logical expressions
        <
            Less than
        >
            Greater than
        <=
            Less than or equal to
        >=
            Greater than or equal to
        ==
            Equal to
        !=
            Not equal to
        !
            Logical negation
        &&
            Logical and
        ||
            Logical or
    -Learned about if else
    -Learned about conditional statements
        if (i > j)
            return i;
        else
            return j;
            Can be written as
            i > j ? i : j;
    -Learned about switch
        Can replace a group if if else statments
        See 6_Switch for example