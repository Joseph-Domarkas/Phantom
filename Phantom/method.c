

# include <Phantom/method.h>
# include <Phantom/token/method.h>

# include <stdio.h>
# include <string.h>

	
void
Phantom__create_method_

(
	structure Phantom_structure_ * Phantom
)

{
	
	fprintf (stdout, "%s;.\n", "Phantom > create_method_ (structure Phantom_structure_ * Phantom)");
	
	Phantom-> create_method_ = & Phantom__create_method_;
	Phantom-> destroy_method_ = & Phantom__destroy_method_;
	Phantom-> nexus_method_ = & Phantom__nexus_method_;
	
	Phantom-> token. create_method_ = & Phantom__token__create_method_;
	Phantom-> token. destroy_method_ = & Phantom__token__destroy_method_;
	Phantom-> token. create_method__standard_ = & Phantom__token__create_method__standard_;
	Phantom-> token. store_print_method_ = & Phantom__token__store_print_method_;
	Phantom-> token. size = 0;
	
	Phantom-> token. create_method__standard_ (& Phantom-> token);
	
};


void
Phantom__destroy_method_

(
	structure Phantom_structure_ * Phantom
)

{
	
	fprintf (stdout, "%s;.\n", "Phantom > destroy_method_ (structure Phantom_structure_ * Phantom)");
	
	Phantom-> create_method_ = & Phantom__create_method_;
	Phantom-> destroy_method_ = & Phantom__destroy_method_;
	Phantom-> nexus_method_ = & Phantom__nexus_method_;
	
};

	
void
Phantom__nexus_method_

(
	structure Phantom_structure_ * Phantom
)

{
	
	fprintf (stdout, "%s;.\n", "Phantom > nexus_method_ (struct Phantom_structure_ * Phantom)");
	
	char buffer [40960];
	
	
	while
	(true)
	
	{
		fscanf (stdin, "%s", buffer);
		
		if
		(! strcmp (buffer, "exit"))
		
		{
			break;
		};
		
		fprintf (stdout, "%s\n", buffer);
	};

	
	Phantom-> token. store_print_method_ (& Phantom-> token);

	
	return;
	
};
