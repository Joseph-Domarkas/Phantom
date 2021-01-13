

# include <Phantom/token/method.h>

# include <stdlib.h>
# include <stdio.h>
# include <string.h>


void
Phantom__token__create_method_

(
	structure Phantom__token_structure_ * token,
	structure Phantom__token__store_structure_ store
)

{
	
	token-> store [token-> size]. name = malloc (strlen (store. name) + sizeof (char)); strcpy (token-> store [token-> size]. name, store. name);
	token-> store [token-> size]. value = malloc (strlen (store. value) + sizeof (char)); strcpy (token-> store [token-> size]. value, store. value);
	token-> store [token-> size]. type = malloc (strlen (store. type) + sizeof (char)); strcpy (token-> store [token-> size]. type, store. type);
	token-> size ++;
	
};


void
Phantom__token__destroy_method_

(
	structure Phantom__token_structure_ * token,
	structure Phantom__token__store_structure_ store
)

{
	
	
	
};



void
Phantom__token__create_method__standard_

(
	structure Phantom__token_structure_ * token
)

{
	
	structure Phantom__token__store_structure_ Element = { .name = "Element", .value = "[Phantom > Element]", .type = "Phantom > Element" };
	token-> create_method_ (token, Element);
	
	structure Phantom__token__store_structure_ Operator = { .name = "Operator", .value = "[Phantom > Operator]", .type = "Phantom > Operator" };
	token-> create_method_ (token, Operator);
	
	structure Phantom__token__store_structure_ Statement = { .name = "Statement", .value = "[Phantom > Statement]", .type = "Phantom > Statement" };
	token-> create_method_ (token, Statement);
	
	structure Phantom__token__store_structure_ Integer = { .name = "Integer", .value = "[Phantom > Element > Integer]", .type = "Phantom > Element > Integer" };
	token-> create_method_ (token, Integer);
	
	structure Phantom__token__store_structure_ Character = { .name = "Character", .value = "[Phantom > Element > Character]", .type = "Phantom > Element > Character" };
	token-> create_method_ (token, Character);
	
	structure Phantom__token__store_structure_ Loop = { .name = "Loop", .value = "[Phantom > Statement > Loop]", .type = "Phantom > Statement > Loop" };
	token-> create_method_ (token, Loop);
	
	structure Phantom__token__store_structure_ While_Loop = { .name = "While Loop", .value = "[Phantom > Statement > Loop > While]", .type = "Phantom > Statement > Loop > While" };
	token-> create_method_ (token, While_Loop);
	
	structure Phantom__token__store_structure_ For_Loop = { .name = "For Loop", .value = "[Phantom > Statement > Loop > For]", .type = "Phantom > Statement > Loop > For" };
	token-> create_method_ (token, For_Loop);
	
};


void
Phantom__token__store_print_method_

(
	structure Phantom__token_structure_ * token
)

{
	
	for
	(Phantom__Integer i = 0; i < token-> size; i ++)
	
	{
		fprintf (stdout, "„%s“, „%s“, „%s“;\n", token-> store [i]. name, token-> store [i]. value, token-> store [i]. type);
	}; 
	
};

