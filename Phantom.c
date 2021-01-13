

# include <Phantom.h>

# include <stdlib.h>


int
main

(
	int argument_integer_,
	char * argument_character_ [ ], char * environment_character_ [ ]
)

{
	
	Phantom_class_ Phantom;
	
	Phantom__create_method_ (& Phantom);
	
	Phantom. nexus_method_ (& Phantom);
	
	Phantom__destroy_method_ (& Phantom);
	
	return EXIT_SUCCESS;
	
};

