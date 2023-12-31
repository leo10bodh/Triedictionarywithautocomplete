#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
#define ALPHABET_SIZE (26)
struct node{
    struct node* child[26];
    int end_of_word;
    char meaning[100];
 };
 typedef struct node node;
node* load();
void unload_rec (node* dict_rem);
char* search(node *root, char* key);
void view();
void add(node* root);
int haveChildren(node* curr);
int deletion(node **curr, char* str);
int printAutoSuggestions(node* root,char query[]);
