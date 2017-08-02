
typedef enum {
	TOKADD    = '+',
	TOKSUB    = '-',
	TOKMUL    = '*',
	TOKMOD    = '%',
	TOKDIV    = '/',
	TOKNOT    = '!',
	TOKBNOT   = '~',
	TOKGT     = '>',
	TOKLT     = '<',
	TOKASS    = '=',
	TOKQUES   = '?',
	TOKLBRACK = '[',
	TOKRBRACK = ']',
	TOKBAND   = '&',
	TOKBOR    = '|',
	TOKLBRACE = '{',
	TOKRBRACE = '}',
	TOKSEMI   = ';',
	TOKLPAREN = '(',
	TOKRPAREN = ')',
	TOKDOT    = '.',
	TOKCOLON  = ':',
	TOKXOR    = '^',
	TOKSTAR   = '*',
	TOKCOMMA  = ',',
	TOKBSLASH = '\\',
	TOKHASH   = '#',
	TOKNUM = 256,
	TOKIDENT,
	TOKHEADER,
	TOKIF,
	TOKDO,
	TOKFOR,
	TOKWHILE,
	TOKRETURN,
	TOKINC,
	TOKDEC,
	TOKADDASS,
	TOKSUBASS,
	TOKMULASS,
	TOKDIVASS,
	TOKMODASS,
	TOKORASS,
	TOKANDASS,
	TOKEQL,
	TOKVOID,
	TOKCHAR,
	TOKCHARLIT,
	TOKINT,
	TOKELSE,
	TOKVOLATILE,
	TOKCONST,
	TOKLOR,
	TOKLAND,
	TOKNEQ,
	TOKLEQ,
	TOKGEQ,
	TOKSHL,
	TOKSHR,
	TOKARROW,
	TOKSTR,
	TOKTYPEDEF,
	TOKSIGNED,
	TOKUNSIGNED,
	TOKSHORT,
	TOKLONG,
	TOKSIZEOF,
	TOKFLOAT,
	TOKDOUBLE,
	TOKSTRUCT,
	TOKUNION,
	TOKGOTO,
	TOKSWITCH,
	TOKCASE,
	TOKDEFAULT,
	TOKCONTINUE,
	TOKBREAK,
	TOKREGISTER,
	TOKEXTERN,
	TOKSTATIC,
	TOKAUTO,
	TOKENUM,
	TOKELLIPSIS,
	TOKHASHHASH,
	TOKDIRSTART,
	TOKDIREND,
	TOKEOF /* EOF needs to be the last. */
} Tokkind;

typedef struct Tok Tok;

struct Tok {
	Tokkind kind;
	int line;
	int col;
	char *fileName;
	char *text;
};

extern Tok *curtok;
extern Tok *peektok;

void	initlexer(char *name, FILE *f);
void	pushlexer(char *name, FILE *f);
void	nexttok();
