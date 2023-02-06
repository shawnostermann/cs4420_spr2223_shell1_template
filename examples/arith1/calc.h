/*
 * Simple lex/yacc example
 *
 */


#define MAX_OPERATIONS 100


/* This is the definition of the "assignment" structure */
struct assignment {
    int	numbers[MAX_OPERATIONS];
    int	operators[MAX_OPERATIONS];
    int	nops;
};


/* externals */
extern int yydebug;

/* you should use THIS routine instead of malloc */
void *MallocZ(int numbytes);

/* routine decls */
void doline(struct assignment *pass);
int yyparse(void);
