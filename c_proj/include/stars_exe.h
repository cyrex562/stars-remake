typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned long    dword;
typedef long long    int16;
typedef unsigned int    uint;
typedef unsigned long long    uint16;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned int    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef word HANDLE16;

typedef HANDLE16 HCURSOR16;

typedef struct CONTEXT CONTEXT, *PCONTEXT;

struct CONTEXT {
};

typedef word HBRUSH16;

typedef ushort WORD;

typedef WORD * VA_LIST16;

typedef HANDLE16 HMENU16;

typedef word WPARAM16;

typedef HANDLE16 HACCEL16;

typedef HACCEL16 HACCEL16Typedef;

typedef word HWND16;

typedef word HMODULE16;

typedef struct LOGFONT16 LOGFONT16, *PLOGFONT16;

struct LOGFONT16 {
};

typedef char * LPCSTR;

typedef word HFONT16;

typedef char * LPSTR;

typedef struct TEXTMETRIC16 TEXTMETRIC16, *PTEXTMETRIC16;

struct TEXTMETRIC16 {
};

typedef struct RECT16 RECT16, *PRECT16;

struct RECT16 {
};

typedef struct WINDOWPLACEMENT16 WINDOWPLACEMENT16, *PWINDOWPLACEMENT16;

struct WINDOWPLACEMENT16 {
};

typedef struct bitmapinfo bitmapinfo, *Pbitmapinfo;

struct bitmapinfo {
};

typedef struct POINT16 POINT16, *PPOINT16;

struct POINT16 {
};

typedef word HDC16;

typedef word HFILE16;

typedef word HGLOBAL16;

typedef word HRGN16;

typedef struct OFSTRUCT OFSTRUCT, *POFSTRUCT;

struct OFSTRUCT {
};

typedef word HPEN16;

typedef struct MSG16 MSG16, *PMSG16;

typedef struct MSG16 * LPMSG16;

struct MSG16 {
};

typedef word bool16;

typedef word HGDIOBJ16;

typedef struct LOGPALETTE LOGPALETTE, *PLOGPALETTE;

struct LOGPALETTE {
};

typedef word HLOCAL16;

typedef void * LPVOID;

typedef WORD HINSTANCE16;

typedef struct PAINTSTRUCT16 PAINTSTRUCT16, *PPAINTSTRUCT16;

struct PAINTSTRUCT16 {
};

typedef struct ATOM ATOM, *PATOM;

struct ATOM {
};

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef word HTASK16;

typedef word HPALETTE16;

typedef word HRSRC16;

typedef word HBITMAP16;

typedef struct COLORREF COLORREF, *PCOLORREF;

struct COLORREF {
    dword value;
};

typedef HANDLE16 HICON16;

typedef struct WNDCLASS16 WNDCLASS16, *PWNDCLASS16;

struct WNDCLASS16 {
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef struct tagWNDCLASSA WNDCLASSA;

typedef uint UINT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;


// WARNING! conflicting data type names: /winnt.h/LPCSTR - /LPCSTR

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};

typedef WNDCLASSA WNDCLASS;

typedef char CHAR;




undefined2 __cdecl16far FUN_1000_075a(HDC16 param_1);
void __cdecl16far FUN_1000_0940(void);
WPARAM16 __stdcall16far FUN_1008_0000(int16 *param_1,byte *param_2,undefined2 param_3_00,int param_3,undefined *param_4);
undefined2 __cdecl16far FUN_1008_0280(undefined2 param_1,undefined2 param_2,undefined2 param_3);
void __cdecl16far FUN_1008_0458(void);
bool __cdecl16far FUN_1008_086c(void);
int16 * __cdecl16far window_op_1008_0e20(int16 *__return_storage_ptr__,HWND16 hwnd_arg1,undefined8 param_2,int16 param_3,HWND16 hwnd_arg4,HMENU16 hmenu_arg5,HINSTANCE16 hinstance_arg6,LPVOID param_7);
void __cdecl16far window_op_1008_0ede(void);
ulong __stdcall16far FRAMEWNDPROC(undefined *param_1,undefined *param_2,VA_LIST16 param_3_00,ulong param_4);
undefined * __cdecl16far FUN_1008_1cc4(undefined *param_1,undefined *param_2,undefined *param_3,int param_4,int *param_5,undefined6 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10);
undefined * __cdecl16far FUN_1008_210e(int param_1,int param_2,int *param_3);
void __cdecl16far FUN_1008_21d8(void);
undefined2 __cdecl16far FUN_1008_22ba(void);
int16 * __cdecl16far FUN_1008_239c(VA_LIST16 param_1,int16 *param_2,undefined2 param_3,HWND16 param_4,HMENU16 param_5,HINSTANCE16 param_6,LPVOID param_7);
void __cdecl16far FUN_1008_2db8(HMENU16 param_1,undefined1 param_2 [10]);
undefined * __stdcall16far SIMPLENEWGAMEDLG(HWND16 param_1,int param_2,int param_3,int param_4,undefined *param_5);
ulong __stdcall16far NEWGAMEDLG2(HWND16 param_1,int param_2,uint param_3,uint param_4,undefined *param_5);
void __cdecl16far FUN_1008_3de6(HWND16 param_1,int16 *param_2,undefined6 param_3);
void __cdecl16far FUN_1008_400c(void);
void __cdecl16far FUN_1008_4138(undefined2 param_1);
undefined2 __cdecl16far FUN_1008_4c54(undefined2 *param_1);
void __cdecl16far FUN_1008_4db4(void);
undefined2 __cdecl16far FUN_1008_4ece(void);
ulong __stdcall16far ABOUT(undefined2 param_1_00,int param_1,uint param_3,int param_4,HWND16 param_5,unkbyte10 param_6,int16 param_7);
ulong __stdcall16far ORDERINFODLG(undefined2 param_1_00,int param_2,uint param_3,int param_4,undefined2 param_5);
void __cdecl16far FUN_1008_5196(HWND16 param_1,int param_2);
undefined2 __cdecl16far FUN_1008_51cc(undefined2 param_1_00,int param_2,undefined4 param_3);
undefined2 __cdecl16far FUN_1008_5218(undefined2 param_1_00,int param_2,uint param_3,undefined4 param_4);
int __cdecl16far FUN_1008_532c(undefined *param_1,int param_2);
undefined2 __cdecl16far FUN_1008_562e(char *param_1,int param_2);
int16 * __cdecl16far FUN_1008_58e4(HWND16 param_1,int16 *param_2,undefined6 param_3);
int __cdecl16far FUN_1008_5ba4(void);
int __cdecl16far FUN_1008_5c08(void);
ulong __stdcall16far HOSTMODEDIALOG(undefined2 param_1_00,undefined2 param_2_00,int param_3,uint param_4,HWND16 param_5);
void __stdcall16far FUN_1008_61f2(void *param_1);
void __cdecl16far FUN_1008_63e0(undefined2 param_1,int16 *param_2,uint param_3,undefined4 *param_4);
void __cdecl16far FUN_1008_6538(void);
void __cdecl16far FUN_1008_6a88(char *param_1,undefined4 *param_2,int param_3);
void __cdecl16far FUN_1008_6bf6(undefined2 param_1,undefined4 *param_2);
void __cdecl16far FUN_1008_6c2c(undefined2 param_1_00,HWND16 param_2);
void __cdecl16far FUN_1008_6c82(void);
void __cdecl16far FUN_1008_71ca(void);
ulong __stdcall16far TITLEWNDPROC(HWND16 param_1,undefined4 param_2,ulong param_3);
ulong __stdcall16far MINEWNDPROC(HWND16 param_1,undefined2 param_2_00,HBRUSH16 param_3,ulong param_4);
void __cdecl16far FUN_1008_7bf4(void);
void __cdecl16far FUN_1008_7d40(int16 *param_1,undefined4 *param_2);
uint __cdecl16far FUN_1008_911c(undefined2 param_1,int param_2,int param_3);
void __cdecl16far FUN_1008_932c(undefined4 param_1,int param_2);
void __cdecl16far FUN_1008_97da(void);
void __cdecl16far FUN_1008_9894(HRGN16 param_1,int *param_2,int param_3,undefined4 param_4,undefined2 param_5,undefined param_6 [14],HDC16 param_7,HDC16 param_8,undefined param_9 [14],undefined2 param_10,undefined param_11 [14],undefined2 param_12,undefined2 param_13,undefined2 param_14);
undefined2 __cdecl16far FUN_1008_9af2(void);
void __cdecl16far FUN_1008_9b66(int param_1,undefined4 param_2);
void __cdecl16far FUN_1008_9d54(ulong param_1,undefined4 *param_2,uint param_3);
undefined2 __cdecl16far FUN_1010_0000(undefined4 *param_1);
undefined2 __cdecl16far FUN_1010_0080(ulong param_1,undefined4 *param_2);
int * __cdecl16far FUN_1010_018e(int param_1);
void __cdecl16far FUN_1010_020c(undefined4 param_1,float *param_2);
undefined2 __cdecl16far FUN_1010_02b0(int param_1,undefined4 *param_2);
void __cdecl16far FUN_1010_0472(int *param_1);
void __cdecl16far FUN_1010_054a(ulong param_1);
void __cdecl16far FUN_1010_06c6(void);
int __cdecl16far FUN_1010_0716(ulong param_1);
undefined2 __cdecl16far FUN_1010_0792(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined2 __cdecl16far FUN_1010_095c(ulong param_1,long *param_2,long *param_3,long *param_4);
void __cdecl16far FUN_1010_0afa(void);
undefined2 __cdecl16far FUN_1010_0c1a(undefined4 *param_1);
int * __cdecl16far FUN_1010_0c48(uint param_1);
undefined2 __cdecl16far FUN_1010_0cda(uint param_1,undefined4 *param_2);
undefined2 __cdecl16far FUN_1010_0e1e(undefined4 *param_1,undefined2 param_2,undefined4 *param_3);
void __cdecl16far FUN_1010_0f26(int param_1,uint param_2,undefined4 *param_3);
undefined2 __cdecl16far FUN_1010_0f50(int param_1,int param_2,undefined4 *param_3,int param_4);
undefined2 __cdecl16far FUN_1010_0ffa(uint param_1);
undefined2 __cdecl16far FUN_1010_1074(uint param_1);
int __cdecl16far FUN_1010_10d2(int param_1,int param_2);
undefined2 __cdecl16far FUN_1010_110c(int param_1,int param_2,undefined *param_3);
undefined4 * __cdecl16far FUN_1010_1284(uint param_1,int param_2);
undefined4 * __cdecl16far FUN_1010_146e(int param_1);
bool __cdecl16far FUN_1010_155a(uint *param_1);
undefined2 __cdecl16far FUN_1010_16ce(undefined4 *param_1);
undefined2 __cdecl16far FUN_1010_1784(int param_1,uint param_2,long param_3);
undefined2 __cdecl16far FUN_1010_17f4(undefined4 param_1,undefined4 param_2);
undefined2 __cdecl16far FUN_1010_186e(int param_1,int param_2,int param_3,int param_4);
bool __cdecl16far FUN_1010_18d2(int param_1,int param_2,uint param_3,long *param_4);
void __cdecl16far FUN_1010_1c24(int *param_1);
uint __cdecl16far FUN_1010_1dc4(ulong param_1);
int __cdecl16far FUN_1010_1df4(int param_1,undefined2 param_2,int *param_3);
undefined2 __cdecl16far FUN_1010_1e9a(int param_1,undefined2 param_2_00,undefined2 *param_3);
uint __cdecl16far FUN_1010_1fae(ulong *param_1,long *param_2);
undefined2 __cdecl16far FUN_1010_219c(int param_1,undefined4 *param_2);
void __cdecl16far FUN_1010_239a(int param_1,int param_2,undefined2 param_3,uint *param_4);
void __cdecl16far FUN_1010_2474(undefined2 param_1_00,undefined4 param_2,undefined2 *param_3);
void __cdecl16far FUN_1010_24b2(undefined2 param_1,undefined4 *param_2);
int16 * __cdecl16far FUN_1010_26a0(void);
undefined2 __cdecl16far FUN_1010_2710(char *param_1);
ulong __stdcall16far NEWPASSWORDDLG(undefined2 param_1_00,int param_2,int param_3,int param_4,undefined2 param_5);
ulong __stdcall16far MESSAGEWNDPROC(undefined *param_1,int param_2,int param_3,ulong param_4);
void __cdecl16far FUN_1010_63b4(int param_1);
undefined * __cdecl16far FUN_1010_67e8(uint param_1);
undefined * __cdecl16far FUN_1010_685a(uint param_1);
void __cdecl16far FUN_1010_68ba(undefined *param_1,int param_2,undefined2 param_3,undefined2 param_4,HDC16 param_5,undefined2 param_6,HDC16 param_7,undefined2 param_8,undefined2 param_9,HDC16 param_10,undefined2 param_11,HDC16 param_12,undefined2 param_13,undefined4 param_14,undefined6 param_15,undefined6 param_16,dword param_17,dword param_18,undefined2 param_19,dword param_20);
undefined2 __cdecl16far FUN_1010_6ac4(int param_1);
bool __cdecl16far FUN_1010_6b58(undefined4 param_1,undefined2 param_2);
bool __cdecl16far FUN_1010_6bb2(undefined4 param_1,undefined2 param_2);
int __cdecl16far FUN_1010_6c24(byte *param_1,int param_2,uint param_3,undefined2 param_4);
undefined2 __cdecl16far FUN_1010_6d40(uint param_1,uint param_2);
undefined2 __cdecl16far FUN_1010_6e34(int param_1);
undefined2 __cdecl16far FUN_1010_6e56(int param_1,uint *param_2);
undefined2 __cdecl16far FUN_1010_6f38(int param_1);
undefined2 __cdecl16far FUN_1010_6f66(byte *param_1,ulong *param_2);
void __cdecl16far FUN_1010_7448(uint param_1,ulong *param_2);
void __cdecl16far FUN_1010_7460(uint param_1,ulong *param_2);
undefined2 __cdecl16far FUN_1010_747a(uint param_1,uint param_2,int param_3);
undefined2 __cdecl16far FUN_1010_74e0(uint param_1,uint param_2,int param_3);
void __cdecl16far FUN_1010_7540(uint param_1);
void __cdecl16far FUN_1010_7608(int param_1);
void __cdecl16far FUN_1010_7672(uint param_1);
void __cdecl16far FUN_1010_7786(void);
void __cdecl16far FUN_1010_77be(void);
undefined2 __cdecl16far FUN_1010_799e(int param_1);
undefined2 __cdecl16far FUN_1010_7bc2(uint param_1);
void __cdecl16far FUN_1010_7cbe(uint param_1,int param_2);
void __cdecl16far FUN_1018_0000(undefined4 param_1,undefined4 param_2);
void __cdecl16far FUN_1018_49d2(void);
void __cdecl16far FUN_1018_49f0(uint param_1);
undefined2 __cdecl16far FUN_1018_4a4a(int param_1);
ulong __stdcall16far RANDOMSEEDDLG(undefined2 param_1_00,int param_2,int param_3,int param_4,undefined2 param_5);
void __cdecl16far FUN_1018_4c8e(undefined2 *param_1,undefined2 *param_2);
void __cdecl16far FUN_1018_4cb2(undefined4 param_1,undefined4 param_2);
void __cdecl16far FUN_1018_4cc8(byte param_1,undefined2 param_2_00,uint param_3,byte param_4,byte param_5,int param_6);
int __cdecl16far FUN_1018_4d3c(void);
void __cdecl16far FUN_1018_4e04(uint *param_1,uint param_2);
int __cdecl16far FUN_1018_4e64(int *param_1,int *param_2);
undefined2 __cdecl16far FUN_1018_4e74(uint param_1);
void __cdecl16far FUN_1018_4fb0(undefined2 param_1,undefined2 param_2);
void __cdecl16far FUN_1018_50b2(uint param_1,HWND16 param_2);
int __cdecl16far FUN_1018_50de(uint param_1,char *param_2);
undefined2 __cdecl16far FUN_1018_5112(uint param_1);
undefined2 __cdecl16far FUN_1018_520e(VA_LIST16 param_1,int16 **param_2);
undefined2 __cdecl16far FUN_1018_5234(VA_LIST16 param_1,VA_LIST16 param_2_00,int16 **param_3);
int __cdecl16far FUN_1018_525c(char *param_1,long param_2);
void __cdecl16far FUN_1018_52da(undefined2 param_1,int param_2,undefined2 param_3,int16 *param_4,int16 *param_5,LPCSTR param_6,int16 param_7);
int __cdecl16far FUN_1018_5318(undefined2 param_1,int *param_2,undefined2 param_3,int16 *param_4,int16 *param_5,LPCSTR param_6,int16 param_7);
void __cdecl16far FUN_1018_5366(LPCSTR param_1,int *param_2,char *param_3,char *param_4,int param_5,int param_6,int *param_7,int param_8,int param_9);
void __cdecl16far FUN_1018_54ee(char **param_1,char *param_2);
void __cdecl16far FUN_1018_550c(char *param_1,char **param_2);
void __cdecl16far FUN_1018_555c(char *param_1,char **param_2);
void __cdecl16far FUN_1018_5580(HBRUSH16 param_1,int *param_2,LPCSTR param_3,int16 param_4);
void __cdecl16far FUN_1018_55f6(HBRUSH16 param_1,int param_2,int param_3,int16 *param_4,int16 *param_5,int param_6,undefined4 param_7,undefined2 param_8,undefined param_9 [14]);
void __cdecl16far FUN_1018_56e0(HRGN16 param_1,int *param_2,char *param_3,HDC16 param_4);
void __cdecl16far FUN_1018_5948(int *param_1,int param_2,int param_3);
void __cdecl16far FUN_1018_5962(int *param_1,int param_2,int param_3);
void __cdecl16far FUN_1018_597c(int *param_1,int *param_2,int param_3);
void __cdecl16far FUN_1018_5a04(undefined2 param_1,int *param_2,int param_3,undefined2 param_4,int16 param_5,word param_6);
undefined2 __cdecl16far FUN_1018_5ad6(HBRUSH16 param_1,ulong *param_2,int param_3,long *param_4,HDC16 *param_5,long param_6);
void __cdecl16far FUN_1018_5bba(undefined *param_1,undefined4 *param_2,int param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined2 param_13,undefined2 param_14,undefined2 param_15);
void __cdecl16far FUN_1018_5d4c(undefined2 *param_1,HWND16 param_2,HDC16 param_3,undefined4 *param_4,undefined2 param_5,undefined2 param_6,int param_7,undefined2 param_8);
undefined2 __cdecl16far FUN_1018_5dc4(HWND16 *param_1);
void __cdecl16far FUN_1018_5f08(HRGN16 param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5);
undefined2 __cdecl16far FUN_1018_6506(undefined2 *param_1,undefined param_2 [12]);
undefined2 __cdecl16far FUN_1018_6628(char *param_1,uint param_2);
HBRUSH16 __cdecl16far FUN_1018_66a6(long param_1);
void __cdecl16far FUN_1018_673a(HGDIOBJ16 param_1);
undefined2 __cdecl16far FUN_1018_6776(char *param_1,undefined2 param_2,undefined4 param_3,uint *param_4);
undefined2 __cdecl16far FUN_1018_685e(byte *param_1,undefined2 param_2,int param_3,undefined4 param_4,int *param_5);
uint __cdecl16far FUN_1018_6976(char param_1);
uint __cdecl16far FUN_1018_6a3a(uint param_1);
undefined2 __cdecl16far FUN_1018_6aa8(long *param_1);
HPALETTE16 __cdecl16far FUN_1018_6b08(HGLOBAL16 param_1);
HPALETTE16 __cdecl16far FUN_1018_6bca(void);
int __cdecl16far FUN_1018_6c1a(long *param_1,undefined2 param_2);
bool16 __cdecl16far FUN_1018_6c46(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,HGLOBAL16 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10,ulong param_11,undefined param_12 [12],dword param_13,undefined param_14 [12],int16 param_15,int16 param_16,void *param_17,bitmapinfo *param_18,uint16 param_19,dword param_20);
HGLOBAL16 __cdecl16far FUN_1018_6cd0(int param_1,LPVOID param_2,uint param_3,HGDIOBJ16 param_4);
HGLOBAL16 __cdecl16far FUN_1018_6f20(uint param_1);
undefined2 __cdecl16far FUN_1018_6fc4(undefined2 param_1,undefined4 param_2,ulong param_3);
ulong __stdcall16far PLANETWNDPROC(undefined *param_1,HBRUSH16 param_2_00,int param_3,ulong param_4);
void __cdecl16far FUN_1020_0736(int16 *param_1,uint param_2);
byte __cdecl16far FUN_1020_0958(undefined *param_1,undefined2 *param_2,undefined4 *param_3,undefined2 param_4,undefined6 param_5,undefined1 param_6 [10],dword param_7,undefined2 param_8);
void __cdecl16far FUN_1020_0aea(undefined *param_1,undefined2 *param_2,int param_3,undefined4 param_4,undefined2 param_5,undefined2 param_6,undefined6 param_7);
void __cdecl16far FUN_1020_0d58(undefined *param_1,undefined2 *param_2,undefined6 param_3,dword param_4);
void __cdecl16far FUN_1020_12c6(undefined4 param_1);
void __cdecl16far FUN_1020_143c(ulong param_1,int param_2);
undefined2 __cdecl16far FUN_1020_16c0(ulong param_1,ulong param_2,int param_3,VA_LIST16 *param_4,undefined2 *param_5);
void __cdecl16far FUN_1020_1a74(undefined *param_1,undefined2 *param_2,uint *param_3,undefined2 param_4,undefined2 param_5,void *param_6,bitmapinfo *param_7,undefined2 param_8,undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined2 param_13,word param_14,word param_15,dword param_16);
void __cdecl16far FUN_1020_1d3a(undefined *param_1,undefined2 *param_2,int *param_3);
void __cdecl16far FUN_1020_2106(void);
void __cdecl16far FUN_1020_2164(undefined *param_1,undefined *param_2);
void __cdecl16far FUN_1020_24c8(int param_1,undefined *param_2);
void __cdecl16far FUN_1020_2640(uint param_1,int param_2,undefined2 param_3,int param_4);
void __cdecl16far FUN_1020_2dd0(uint param_1);
void __cdecl16far FUN_1020_2f0c(uint param_1,int param_2,int param_3);
undefined2 __cdecl16far FUN_1020_307e(int param_1,VA_LIST16 param_2);
undefined2 __cdecl16far FUN_1020_30ca(int param_1);
void __cdecl16far FUN_1020_3122(int param_1,HBRUSH16 param_2);
void __cdecl16far FUN_1020_3148(int param_1,HBRUSH16 param_2,int param_3);
void __cdecl16far FUN_1020_3370(undefined *param_1,long param_2);
int __cdecl16far FUN_1020_3506(int param_1,undefined2 param_2_00,int param_3);
int __cdecl16far FUN_1020_3626(int param_1,undefined2 param_2,int param_3);
int __cdecl16far FUN_1020_37a6(int param_1,int param_2);
int __cdecl16far FUN_1020_37fc(int param_1,undefined4 param_2);
int __cdecl16far FUN_1020_3842(int param_1,undefined2 param_2,int param_3);
int __cdecl16far FUN_1020_389e(int param_1,undefined4 param_2);
int __cdecl16far FUN_1020_38de(int param_1,undefined2 param_2,int param_3);
int __cdecl16far FUN_1020_393a(undefined4 param_1,int param_2);
int __cdecl16far FUN_1020_3986(int param_1,undefined2 param_2,int param_3);
int __cdecl16far FUN_1020_39d0(int param_1,undefined2 param_2,int param_3);
undefined2 __cdecl16far FUN_1020_3a7c(ulong *param_1);
undefined2 __cdecl16far FUN_1020_3abc(ulong param_1,int *param_2,int *param_3,undefined2 *param_4);
void __cdecl16far FUN_1020_3d26(undefined param_1);
void __cdecl16far FUN_1020_3d40(undefined param_1);
void __cdecl16far FUN_1020_3d5a(int param_1);
void __cdecl16far FUN_1020_3e0a(uint *param_1,uint *param_2);
void __cdecl16far FUN_1020_4140(void);
void __cdecl16far FUN_1020_4198(void);
void __cdecl16far FUN_1020_4230(byte *param_1);
void __cdecl16far FUN_1020_428c(int *param_1,int *param_2);
void __cdecl16far FUN_1020_44f6(long *param_1,uint *param_2);
void __cdecl16far FUN_1020_4692(uint *param_1,uint *param_2);
void __cdecl16far FUN_1020_4774(void);
void __cdecl16far FUN_1020_4788(int param_1,uint param_2,undefined2 *param_3);
void __cdecl16far FUN_1020_4832(undefined *param_1);
undefined2 __cdecl16far FUN_1020_4854(uint *param_1,uint *param_2);
uint __cdecl16far FUN_1020_48b0(void);
undefined2 __cdecl16far FUN_1020_492e(int param_1,uint param_2,ulong *param_3);
undefined2 __cdecl16far FUN_1020_5848(undefined2 param_1);
undefined2 __cdecl16far FUN_1020_5b78(char *param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_1020_5cd2(uint16 *param_1);
void __cdecl16far FUN_1020_5f02(undefined *param_1,undefined2 param_2_00,undefined2 param_3,undefined4 param_4);
void __cdecl16far FUN_1028_0000(undefined *param_1,undefined2 *param_2,word param_3);
bool16 __cdecl16far FUN_1028_062a(undefined *param_1,undefined2 *param_2);
void __cdecl16far FUN_1028_0cec(undefined *param_1,undefined2 *param_2,int param_3,word param_4);
void __cdecl16far FUN_1028_0e38(undefined *param_1,undefined2 *param_2,uint param_3,undefined8 param_4);
void __cdecl16far FUN_1028_10ba(undefined *param_1,undefined2 *param_2,int param_3);
undefined2 __cdecl16far FUN_1028_1478(long param_1);
undefined2 __cdecl16far FUN_1028_1498(long param_1);
undefined2 __cdecl16far FUN_1028_14c4(int param_1);
void __cdecl16far FUN_1028_1572(undefined2 param_1_00,undefined2 param_2_00,undefined *param_3,int param_4);
void __cdecl16far FUN_1028_1c46(int param_1,undefined *param_2);
void __cdecl16far FUN_1028_1dd6(int param_1);
int __cdecl16far FUN_1028_1e5c(undefined4 param_1,int param_2);
int __cdecl16far FUN_1028_1ed2(int *param_1,int param_2);
int __cdecl16far FUN_1028_1f8c(int param_1,undefined2 param_2);
int __cdecl16far FUN_1028_2058(int param_1,undefined2 param_2);
void __cdecl16far FUN_1028_21d4(ulong param_1,uint param_2,uint param_3,int param_4);
void __cdecl16far FUN_1028_23ac(int param_1,undefined2 param_2,HRGN16 param_3,int param_4,int param_5,int param_6,int param_7,void *param_8,bitmapinfo *param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined1 param_13 [10],dword param_14);
undefined2 __cdecl16far FUN_1028_266e(uint *param_1,int param_2,undefined2 param_3_00,int param_4,undefined2 param_5,uint param_6);
int __cdecl16far FUN_1028_2728(undefined2 param_1,int param_2,undefined2 param_3,int param_4,undefined *param_5);
undefined2 __stdcall16far TRANSFERDLG(undefined2 param_1,undefined4 param_2,uint param_3,HWND16 param_4);
undefined2 __cdecl16far FUN_1028_2b7a(HWND16 param_1,undefined2 param_2,undefined2 param_3,uint param_4);
int __cdecl16far FUN_1028_2eca(int param_1,undefined2 param_2);
int __cdecl16far FUN_1028_2f10(int param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_1028_2f36(int param_1,uint param_2,int param_3,long param_4,undefined4 *param_5);
int __cdecl16far FUN_1028_30d6(int param_1,uint param_2);
void __cdecl16far FUN_1028_319a(void);
void __cdecl16far FUN_1028_32c4(HWND16 param_1,int16 *param_2,int param_3,int param_4,undefined4 param_5,dword param_6);
void __cdecl16far FUN_1028_33d8(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined2 param_5,undefined param_6 [14],undefined2 param_7,undefined param_8 [14],undefined2 param_9);
undefined2 __cdecl16far FUN_1028_344a(int param_1);
void __cdecl16far FUN_1028_373a(undefined *param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
void __cdecl16far FUN_1028_3a58(undefined *param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
void __cdecl16far FUN_1028_3c5a(undefined *param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
int16 * __cdecl16far FUN_1028_3e74(undefined4 param_1,undefined2 param_2_00,int param_3,int param_4);
undefined2 __cdecl16far FUN_1028_47a0(void);
void __cdecl16far FUN_1028_4834(void);
void __cdecl16far FUN_1028_48dc(uint param_1,LPARAM param_2);
bool16 __cdecl16far FUN_1028_4902(int param_1);
void __cdecl16far FUN_1028_4cea(int param_1);
void __cdecl16far FUN_1028_4eb0(undefined4 param_1,int param_2,int param_3);
uint __cdecl16far FUN_1028_4f92(ulong param_1,int param_2,uint param_3,long param_4,int param_5);
LRESULT __stdcall16far FAKEEDITPROC(HWND16 param_1,HWND16 param_2,uint param_3_00,undefined4 param_4);
int __cdecl16far FUN_1028_542c(undefined *param_1);
void __cdecl16far FUN_1028_555a(int param_1,int param_2);
void __cdecl16far FUN_1028_5a3e(int param_1,int param_2);
void __cdecl16far FUN_1028_5bfa(int param_1);
int __cdecl16far FUN_1028_5d44(int param_1,undefined2 *param_2);
void __cdecl16far FUN_1028_5e2e(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined2 param_4);
void __cdecl16far FUN_1028_5ec4(int *param_1);
ulong __stdcall16far SCANNERWNDPROC(int param_1,ulong param_2,ulong param_3);
int __cdecl16far FUN_1030_085a(int param_1);
int __cdecl16far FUN_1030_08e0(int param_1);
undefined2 __cdecl16far FUN_1030_0968(int16 *param_1,ulong *param_2,int param_3);
void __cdecl16far FUN_1030_1dee(int *param_1,int *param_2);
void __cdecl16far FUN_1030_20a4(int16 *param_1,undefined *param_2);
void __cdecl16far FUN_1030_2348(int16 *param_1,RECT16 *param_2,undefined2 *param_3,VA_LIST16 param_4);
void __cdecl16far FUN_1030_2a7c(HRGN16 param_1,int *param_2,int param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined1 param_8 [10],undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined2 param_13);
void __cdecl16far FUN_1030_2b48(void);
void __cdecl16far FUN_1030_2c36(uint param_1,uint param_2,undefined param_3 [12]);
void __cdecl16far FUN_1030_2da8(int16 *param_1,undefined *param_2,undefined4 param_3);
undefined2 __cdecl16far FUN_1030_2f0c(undefined4 param_1,int param_2);
void __cdecl16far FUN_1030_2fe2(int param_1,int param_2,int param_3);
void __cdecl16far FUN_1030_3110(int *param_1);
void __cdecl16far FUN_1030_3140(int *param_1);
undefined2 __cdecl16far FUN_1030_3170(long param_1,long *param_2);
undefined2 __cdecl16far FUN_1030_345a(undefined4 param_1,int param_2);
bool __cdecl16far FUN_1030_34d6(long param_1);
void __cdecl16far FUN_1030_3954(HRGN16 param_1,HRGN16 *param_2,int param_3,undefined4 param_4,undefined2 param_5,undefined param_6 [14],undefined2 param_7);
undefined * __cdecl16far FUN_1030_3a54(undefined *param_1);
void __cdecl16far FUN_1030_3a94(long *param_1,int param_2);
undefined2 __cdecl16far FUN_1030_3bbc(long *param_1,int param_2);
ulong __stdcall16far FINDDLG(undefined2 param_1_00,int param_2,int param_3,int param_4,WPARAM16 param_5);
undefined2 __cdecl16far FUN_1030_3e0e(byte *param_1);
int __cdecl16far FUN_1038_0000(int param_1,int param_2);
uint __cdecl16far FUN_1038_0098(long param_1);
void __cdecl16far FUN_1038_01b0(uint param_1,uint param_2);
void __cdecl16far FUN_1038_01fc(int param_1);
uint * __cdecl16far FUN_1038_0232(int param_1,int param_2);
uint __cdecl16far FUN_1038_0372(uint param_1,uint param_2,int param_3);
undefined2 __cdecl16far FUN_1038_03ec(undefined4 param_1,undefined4 param_2);
void __cdecl16far FUN_1038_04ca(uint param_1,uint param_2,int param_3);
int __cdecl16far FUN_1038_0522(uint *param_1,undefined2 param_2,uint param_3);
uint * __cdecl16far FUN_1038_0562(uint param_1,uint param_2,int param_3);
void __cdecl16far FUN_1038_05b8(uint param_1,uint param_2);
void __cdecl16far FUN_1040_0000(undefined2 *param_1,undefined2 param_2,ulong param_3);
void __cdecl16far FUN_1040_01d4(undefined4 *param_1,undefined2 *param_2);
undefined2 __cdecl16far FUN_1040_02ec(VA_LIST16 param_1,byte *param_2);
undefined2 __cdecl16far FUN_1040_1062(int param_1,uint *param_2,int param_3,int param_4);
undefined2 __cdecl16far FUN_1040_148a(undefined4 *param_1,undefined2 param_2);
void __cdecl16far FUN_1040_16fc(byte *param_1,ulong param_2);
void __cdecl16far FUN_1040_17a6(int param_1);
void __cdecl16far FUN_1040_1882(void);
void __cdecl16far FUN_1040_190c(void);
void __cdecl16far FUN_1040_1ab6(int param_1);
undefined2 __cdecl16far FUN_1040_1ae4(uint param_1,int param_2,uint param_3);
int __cdecl16far FUN_1040_1d0a(int param_1);
uint __cdecl16far FUN_1040_1d52(undefined4 param_1,int param_2);
void __cdecl16far FUN_1040_1e24(void);
void __cdecl16far FUN_1040_1ece(undefined2 param_1,uint param_2);
void __cdecl16far FUN_1040_1f9c(void);
void __cdecl16far FUN_1040_1fb4(LPVOID param_1,uint16 *param_2);
void __cdecl16far FUN_1040_202a(undefined4 param_1);
void __cdecl16far FUN_1040_2086(undefined2 *param_1,undefined2 *param_2);
void __cdecl16far FUN_1040_2194(int *param_1,undefined2 *param_2);
undefined2 __cdecl16far FUN_1040_230a(VA_LIST16 param_1,undefined *param_2,int param_3);
int __cdecl16far FUN_1040_28f2(int param_1);
void __cdecl16far FUN_1040_2922(uint param_1);
void __cdecl16far FUN_1040_2c62(uint *param_1,int param_2,int param_3);
void __cdecl16far FUN_1040_2f6a(undefined4 param_1);
void __cdecl16far FUN_1040_31de(undefined4 param_1);
void __cdecl16far FUN_1040_3258(undefined4 param_1,int param_2);
void __cdecl16far FUN_1040_3340(undefined4 param_1,int param_2,byte param_3);
void __cdecl16far FUN_1040_3398(ulong param_1,uint param_2);
void __cdecl16far FUN_1040_3d68(int param_1);
undefined2 __cdecl16far FUN_1040_3e38(undefined4 param_1,int param_2);
void __cdecl16far FUN_1040_3ea4(byte param_1,uint param_2);
int __cdecl16far FUN_1040_3f78(uint param_1,int param_2,int param_3,uint param_4);
void __cdecl16far FUN_1040_422c(int param_1,uint16 *param_2,undefined4 param_3);
void __cdecl16far FUN_1040_42c8(LPCSTR param_1,uint16 *param_2);
undefined2 __cdecl16far FUN_1040_4304(void);
ulong __stdcall16far NEWGAMEDLG(HWND16 param_1,int param_2,int param_3,int param_4,HRGN16 param_5);
void __cdecl16far FUN_1048_0000(uint16 *param_1,int param_2);
void __cdecl16far FUN_1048_0daa(void);
void __cdecl16far FUN_1048_144a(void);
void __cdecl16far FUN_1048_25bc(void);
undefined2 __cdecl16far FUN_1048_2b9e(uint *param_1);
undefined2 __cdecl16far FUN_1048_2fbe(undefined2 param_1_00,undefined2 param_2,undefined4 param_3);
byte __cdecl16far FUN_1048_2fd6(int *param_1,int param_2,int *param_3,int param_4);
byte __cdecl16far FUN_1048_3016(int *param_1,int param_2,int *param_3,int param_4);
void __cdecl16far FUN_1048_3064(void);
void __cdecl16far FUN_1048_4768(int param_1);
byte __cdecl16far FUN_1048_4b3e(int *param_1,int param_2,int *param_3,int param_4);
undefined2 __cdecl16far FUN_1048_4b7e(undefined4 *param_1,int param_2);
int __cdecl16far FUN_1048_4c24(ulong param_1,uint param_2,ulong param_3,uint param_4);
uint __cdecl16far FUN_1048_4cc2(uint param_1,uint param_2,uint param_3);
int __cdecl16far FUN_1048_4d38(uint *param_1,undefined2 param_2,int param_3);
int __cdecl16far FUN_1048_4dd6(long param_1);
undefined2 __cdecl16far FUN_1048_5006(undefined4 param_1);
int __cdecl16far FUN_1048_5076(undefined4 param_1);
void __cdecl16far FUN_1048_5150(void);
void __cdecl16far FUN_1048_552a(undefined2 *param_1,int param_2);
int __cdecl16far FUN_1048_5662(ulong param_1,ulong param_2,ulong param_3,int param_4);
uint __cdecl16far FUN_1048_5b4c(uint *param_1,uint *param_2);
void __cdecl16far FUN_1048_6444(uint *param_1,undefined2 param_2,undefined4 *param_3,int param_4);
void __cdecl16far FUN_1048_6568(int param_1,uint param_2,uint param_3,int param_4);
void __cdecl16far FUN_1048_671e(int param_1);
int __cdecl16far FUN_1048_6932(int param_1,undefined2 param_2,int param_3);
undefined2 __cdecl16far FUN_1048_6a12(int *param_1);
undefined2 __cdecl16far FUN_1048_6bf8(int param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_1048_6c3a(int param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_1048_6c7c(int param_1,undefined2 param_2);
void __cdecl16far FUN_1048_6cc8(void);
void __cdecl16far FUN_1048_7336(ulong param_1,long *param_2);
void __cdecl16far FUN_1048_73d8(long param_1,long *param_2);
void __cdecl16far FUN_1048_746e(uint param_1);
uint __cdecl16far FUN_1048_75f8(undefined4 param_1,undefined *param_2);
int * __cdecl16far FUN_1048_76c6(int *param_1,undefined *param_2);
int * __cdecl16far FUN_1048_779a(int *param_1,undefined *param_2);
undefined2 __cdecl16far FUN_1048_787c(undefined2 param_1_00,undefined2 param_2,undefined4 param_3);
int __cdecl16far FUN_1048_789c(ulong param_1,ulong param_2,ulong param_3,int param_4);
void __cdecl16far FUN_1048_7c48(undefined4 *param_1);
void __cdecl16far FUN_1048_7d26(undefined2 *param_1,undefined4 *param_2);
undefined2 __cdecl16far FUN_1048_7f64(undefined4 param_1);
void __cdecl16far FUN_1048_803e(uint *param_1,undefined2 param_2);
int __cdecl16far FUN_1050_0000(void);
void __cdecl16far FUN_1050_0450(int param_1);
void __cdecl16far FUN_1050_04dc(void);
undefined2 __cdecl16far FUN_1050_1056(uint *param_1,int param_2,long param_3,long *param_4);
void __cdecl16far FUN_1050_1744(int param_1,undefined4 param_2,int param_3,int param_4);
void __cdecl16far FUN_1050_178a(void);
void __cdecl16far FUN_1050_1a04(void);
void __cdecl16far FUN_1050_21ca(int param_1);
void __cdecl16far FUN_1050_32f4(void);
undefined2 __cdecl16far FUN_1050_3424(int *param_1,undefined2 param_2,int *param_3,long param_4);
void __cdecl16far FUN_1050_34da(void);
void __cdecl16far FUN_1050_36b0(void);
void __cdecl16far FUN_1050_3db6(void);
void __cdecl16far FUN_1050_3fd8(void);
void __cdecl16far FUN_1050_43c8(void);
void __cdecl16far FUN_1050_451e(void);
void __cdecl16far FUN_1050_45f0(void);
void __cdecl16far FUN_1050_4902(void);
void __cdecl16far FUN_1050_4b06(void);
ulong __stdcall16far POPUPWNDPROC(HWND16 param_1,undefined4 param_2,ulong param_3);
void __cdecl16far FUN_1058_0832(HWND16 param_1,HINSTANCE16 param_2,LPVOID param_3);
undefined * __cdecl16far FUN_1058_0cc6(int param_1,HWND16 param_2,RECT16 *param_3,int param_4,int param_5,int param_6,HMENU16 param_7);
int __cdecl16far FUN_1058_0eb0(HRGN16 param_1,undefined *param_2);
int __cdecl16far FUN_1058_15e0(HRGN16 param_1,int16 *param_2);
void __cdecl16far FUN_1058_1e16(undefined4 param_1,int param_2);
int __cdecl16far FUN_1058_2294(HRGN16 param_1,int param_2,int param_3);
int __cdecl16far FUN_1058_2416(HRGN16 param_1,int param_2,int param_3);
int __cdecl16far FUN_1058_2578(HRGN16 param_1,int param_2,undefined2 param_3);
int __cdecl16far FUN_1058_25e2(HRGN16 param_1,int param_2,int param_3);
undefined2 __cdecl16far FUN_1060_0000(undefined4 param_1);
void __cdecl16far FUN_1060_0082(undefined2 param_1,int param_2);
ulong __stdcall16far SLOTDLG(HWND16 param_1,undefined *param_2_00,uint param_3,uint param_4,int16 *param_5);
void __cdecl16far FUN_1060_10d0(HWND16 param_1,int16 *param_2,undefined2 param_3,HDC16 param_4,undefined2 param_5,void *param_6,bitmapinfo *param_7,undefined2 param_8,dword param_9);
undefined2 __cdecl16far FUN_1060_1644(int16 *param_1,long param_2,undefined2 param_3,int param_4,int param_5);
int16 * __cdecl16far FUN_1060_1d90(int16 *param_1,int16 *param_2);
void __cdecl16far FUN_1060_23a6(HWND16 param_1,int16 *param_2,undefined2 param_3_00,undefined4 *param_4);
void __cdecl16far FUN_1060_289a(HDC16 param_1);
undefined2 __cdecl16far FUN_1060_290c(int param_1,undefined2 param_2_00,uint param_3,uint param_4,HDC16 param_5,int param_6);
int __cdecl16far FUN_1060_2d74(int param_1);
int __cdecl16far FUN_1060_2daa(int param_1);
undefined2 __cdecl16far FUN_1060_2e28(HWND16 param_1,int param_2,word param_3);
void __cdecl16far FUN_1060_30e2(undefined2 param_1,uint param_2);
void __cdecl16far FUN_1060_31aa(void);
int __cdecl16far FUN_1060_328e(int param_1);
int __cdecl16far FUN_1060_32b2(uint *param_1);
int __cdecl16far FUN_1060_37ac(int param_1);
void __cdecl16far FUN_1060_3996(int param_1);
undefined2 __cdecl16far FUN_1068_0000(int param_1);
void __cdecl16far FUN_1068_0100(undefined4 *param_1);
void __cdecl16far FUN_1068_07fa(int param_1);
ulong __stdcall16far FUN_1068_08c8(undefined4 param_1,HWND16 param_2,uint param_3,undefined *param_4);
void __cdecl16far FUN_1068_0db2(HWND16 param_1,HWND16 param_2,undefined2 param_3,int param_4);
undefined2 __cdecl16far FUN_1068_14fc(undefined2 param_1);
void __cdecl16far FUN_1068_15b2(HWND16 param_1,int16 *param_2);
uint __cdecl16far FUN_1068_19a2(undefined2 param_1);
undefined2 __cdecl16far FUN_1068_19f8(undefined2 *param_1);
void __cdecl16far FUN_1068_1a7c(uint *param_1,long *param_2,int param_3,int param_4);
ulong __stdcall16far DEFAULTSDLG(HWND16 param_1,int param_2,int param_3,int param_4,HWND16 param_5);
ulong __stdcall16far RESEARCHDLG(HWND16 param_1,ulong param_2,uint param_3,int16 *param_4);
void __cdecl16far FUN_1070_0578(int16 *param_1,int16 *param_2,int param_3,uint param_4);
undefined2 __cdecl16far FUN_1070_0f92(int16 *param_1,int param_2,int param_3,byte param_4);
int __cdecl16far FUN_1070_10f4(int param_1,int param_2,int param_3);
ulong __stdcall16far BROWSERDLG(HWND16 param_1,int param_2,int param_3,uint param_4,undefined *param_5);
ulong __stdcall16far BROWSERWNDPROC(HWND16 param_1,undefined4 param_2,ulong param_3);
int16 * __cdecl16far FUN_1070_18f4(VA_LIST16 param_1,int param_2,int param_3,int16 *param_4);
int __cdecl16far FUN_1070_3114(long param_1);
undefined2 __cdecl16far FUN_1070_31b6(char *param_1);
undefined2 __cdecl16far FUN_1078_0000(undefined *param_1,undefined *param_2,int param_3);
ulong __stdcall16far RACEWIZARDDLG1(dword param_1,uint param_2,uint param_3,undefined4 *param_4);
ulong __stdcall16far RACEWIZARDDLG2(HWND16 param_1,int param_2,uint param_3,uint param_4,HWND16 param_5);
void __cdecl16far FUN_1078_103c(HWND16 param_1,int16 *param_2,uint param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6);
undefined2 __cdecl16far FUN_1078_1448(void);
undefined2 __cdecl16far FUN_1078_144c(HWND16 param_1,ulong param_2,byte param_3);
ulong __stdcall16far RACEWIZARDDLG3(HWND16 param_1,int param_2,uint param_3,uint param_4,HWND16 param_5);
void __cdecl16far FUN_1078_195c(HWND16 param_1,int16 *param_2,int param_3);
undefined2 __cdecl16far FUN_1078_1c6c(HWND16 param_1,undefined2 param_2,undefined2 param_3_00,byte param_4);
int __cdecl16far FUN_1078_1d42(int param_1,int param_2);
int __cdecl16far FUN_1078_1d54(int param_1,int param_2,int param_3);
undefined2 __cdecl16far FUN_1078_1d84(int param_1,byte param_2);
void __cdecl16far FUN_1078_1da8(int param_1,char param_2,int param_3);
ulong __stdcall16far RACEWIZARDDLG4(HWND16 param_1,int param_2,uint param_3,int param_4,undefined2 param_5);
ulong __stdcall16far RACEWIZARDDLG5(HWND16 param_1,int param_2,uint param_3,int param_4,VA_LIST16 param_5);
undefined2 __cdecl16far FUN_1078_2274(int param_1,undefined4 param_2);
void __cdecl16far FUN_1078_275a(HRGN16 param_1,undefined4 *param_2,int param_3);
undefined2 __cdecl16far FUN_1078_298a(char *param_1,undefined2 *param_2);
void __cdecl16far FUN_1078_2aea(undefined2 param_1,VA_LIST16 param_2);
void __cdecl16far FUN_1078_2b26(undefined4 *param_1);
void __cdecl16far FUN_1080_0000(uint param_1);
undefined * __cdecl16far FUN_1080_00cc(undefined *param_1);
undefined2 __stdcall16far VCRDLG(int param_1,int param_2,uint param_3,uint param_4,undefined *param_5);
void __cdecl16far FUN_1080_06ee(int16 *param_1,int param_2,int param_3);
undefined2 __cdecl16far FUN_1080_1212(int param_1,undefined4 param_2,char param_3);
void __cdecl16far FUN_1080_141e(void);
ulong __stdcall16far RELATIONSDLG(HWND16 param_1,undefined2 param_2_00,uint param_3,uint param_4,HRGN16 param_5);
ulong __stdcall16far BATTLEPLANSDLG(HWND16 param_1,int param_2,uint param_3,int param_4,HRGN16 param_5);
undefined __cdecl16far FUN_1088_0d38(int param_1,int param_2,undefined2 param_3,int param_4);
undefined2 __cdecl16far FUN_1088_0dde(uint *param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_1088_0e78(uint *param_1,undefined2 param_2);
uint __cdecl16far FUN_1088_0f48(int param_1,undefined2 param_2);
byte __cdecl16far FUN_1088_0f96(int param_1,undefined2 param_2);
undefined2 __cdecl16far FUN_1088_0fe2(undefined4 param_1,long param_2,undefined2 param_3,long param_4);
undefined2 __cdecl16far FUN_1088_12e6(uint *param_1,uint param_2,undefined4 *param_3,uint *param_4);
int __cdecl16far FUN_1088_1758(undefined4 param_1,int param_2);
undefined2 __cdecl16far FUN_1088_18d2(int param_1,undefined2 param_2,int param_3);
undefined2 __cdecl16far FUN_1088_1960(uint *param_1);
void __cdecl16far FUN_1088_19d6(int param_1);
undefined2 __cdecl16far FUN_1088_1a74(int param_1);
undefined2 __cdecl16far FUN_1088_1b46(int param_1);
undefined2 __cdecl16far FUN_1088_1c0a(int param_1);
void __cdecl16far FUN_1088_1cce(int param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6,uint param_7);
int __cdecl16far FUN_1088_1f58(int param_1,int param_2,int param_3,uint param_4,int *param_5);
int __cdecl16far FUN_1088_2066(int param_1,int param_2,int param_3);
void __cdecl16far FUN_1088_22c4(uint *param_1,uint *param_2,int param_3,int param_4,int param_5,undefined4 param_6);
undefined2 __cdecl16far FUN_1088_25d8(uint *param_1,undefined param_2,long *param_3,long param_4);
undefined2 __cdecl16far FUN_1088_2854(uint param_1,undefined4 param_2,int param_3,uint param_4);
void __cdecl16far FUN_1088_2c88(uint param_1,uint *param_2,int param_3,uint param_4,uint *param_5,uint param_6,uint *param_7,int param_8,int param_9);
void __cdecl16far FUN_1088_3250(ulong param_1);
undefined2 __cdecl16far FUN_1088_3810(undefined4 param_1,int param_2);
void __cdecl16far FUN_1088_3890(void);
ulong __stdcall16far PANICDLG(undefined2 param_1_00,int param_2,int param_3,int param_4,undefined2 param_5);
void __cdecl16far FUN_1090_84c2(int param_1,undefined2 param_2);
void __cdecl16far FUN_1090_84f4(HRGN16 param_1);
void __cdecl16far FUN_1090_86cc(int param_1);
void __cdecl16far FUN_1090_88fa(void);
void __cdecl16far FUN_1090_89d4(int param_1);
void __cdecl16far FUN_1090_8a2a(void);
void __cdecl16far FUN_1090_8a36(void);
undefined2 __cdecl16far FUN_1090_8a38(void);
int __cdecl16far FUN_1090_8a5c(char *param_1,uint param_2);
undefined * __cdecl16far FUN_1090_8b72(void);
undefined2 __cdecl16far FUN_1090_b15e(uint param_1,uint param_2,uint param_3,uint param_4);
void __cdecl16far FUN_1090_b1be(undefined *param_1);
undefined2 __cdecl16far FUN_1090_b20e(undefined *param_1,undefined *param_2);
undefined2 __cdecl16far FUN_1090_b24c(int param_1,undefined *param_2);
undefined2 __cdecl16far FUN_1090_b2aa(undefined *param_1,undefined *param_2);
undefined2 __cdecl16far FUN_1090_b35e(undefined *param_1,uint param_2,int param_3);
undefined2 __cdecl16far FUN_1090_b412(int param_1,int param_2);
uint __cdecl16far FUN_1090_b436(undefined *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6);
uint __cdecl16far FUN_1090_b546(undefined *param_1,int param_2,uint param_3);
undefined2 __cdecl16far FUN_1090_b5a8(undefined *param_1,uint param_2,uint param_3,int param_4,int param_5);
int __cdecl16far FUN_1090_b62a(undefined4 param_1,uint param_2,uint param_3,uint *param_4,undefined2 param_5);
int __cdecl16far FUN_1090_b744(undefined *param_1,int param_2,uint param_3,uint param_4,uint param_5);
int __cdecl16far FUN_1090_b82c(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int __cdecl16far FUN_1090_b91e(undefined *param_1,uint param_2,uint param_3);
undefined2 __cdecl16far FUN_1090_b99c(int param_1,int *param_2,uint param_3);
undefined2 __cdecl16far FUN_1090_ba48(undefined *param_1,LPARAM param_2);
undefined2 __cdecl16far FUN_1090_ba9a(int param_1);
undefined2 __stdcall16far SCOREDLG(undefined2 param_1_00,undefined2 param_2_00,int param_3,int param_4,HWND16 param_5);
void entry(void);
void __cdecl16far FUN_10a0_00c4(void);
void FUN_10a0_01a3(void);
void FUN_10a0_01b1(void);
void __stdcall16far FUN_10a0_01c0(void);
void __stdcall16far FUN_10a0_01d1(void);
void __cdecl16far FUN_10a0_01e0(void);
void __cdecl16near FUN_10a0_0241(void);
void __cdecl16near FUN_10a0_026a(void);
void FUN_10a0_027e(undefined2 param_1_00,undefined *param_2,uint param_3,uint param_4,uint param_5);
char * __cdecl16far FUN_10a0_0352(char *param_1,char *param_2,int param_3);
int __cdecl16far thunk_FUN_10a0_0fdc(byte *param_1);
void FUN_10a0_037e(void);
void __cdecl16far FUN_10a0_039a(undefined *param_1);
uint __cdecl16far FUN_10a0_03b6(undefined *param_1);
char * __cdecl16far FUN_10a0_0450(char *param_1,char param_2);
int __cdecl16far FUN_10a0_047a(byte *param_1,byte *param_2);
uint __cdecl16far FUN_10a0_04bc(byte *param_1,byte *param_2,uint param_3);
char * __cdecl16far FUN_10a0_0514(char *param_1,char param_2);
char * __cdecl16far FUN_10a0_053c(char *param_1);
undefined2 * __cdecl16far FUN_10a0_055a(undefined2 *param_1,undefined2 *param_2,uint param_3);
void __cdecl16far FUN_10a0_05a2(uint param_1,int param_2,int param_3,undefined *param_4);
void __cdecl16near FUN_10a0_06e6(void);
undefined2 __cdecl16far FUN_10a0_0704(int *param_1);
int __cdecl16far FUN_10a0_0729(int param_1,int param_2);
void FUN_10a0_0752(void);
void FUN_10a0_0788(void);
void __stdcall16far FUN_10a0_0796(void);
void __stdcall16far FUN_10a0_07ba(undefined2 param_1);
void FUN_10a0_07fa(void);
void FUN_10a0_0826(void);
undefined4 __stdcall16far FUN_10a0_084a(uint param_1,uint param_2,uint param_3,uint param_4);
ulong __stdcall16far FUN_10a0_08e4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 __stdcall16far FUN_10a0_0916(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 __stdcall16far FUN_10a0_09b6(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 __stdcall16far FUN_10a0_0a16(uint param_1,uint param_2,uint param_3,uint param_4);
int __cdecl16far FUN_10a0_0a80(undefined4 param_1,undefined4 param_2);
undefined2 * __cdecl16far FUN_10a0_0ac6(ulong param_1,undefined4 param_2,uint param_3);
void FUN_10a0_0b96(void);
void FUN_10a0_0bb2(void);
void FUN_10a0_0bd8(void);
void FUN_10a0_0bde(void);
void FUN_10a0_0c0e(void);
undefined2 __cdecl16far FUN_10a0_0c14(void);
void __cdecl16far FUN_10a0_0c66(void);
void __cdecl16far FUN_10a0_0c92(void);
void FUN_10a0_0cb6(void);
void __cdecl16far FUN_10a0_0cdc(undefined param_1);
void FUN_10a0_0d10(undefined *param_1,undefined1 param_2 [10]);
void __cdecl16far FUN_10a0_0e92(void);
undefined2 FUN_10a0_0f27(void);
undefined2 __cdecl16far FUN_10a0_0f6a(void);
void __cdecl16far FUN_10a0_0f89(void);
void __cdecl16near FUN_10a0_0fa1(void);
int __cdecl16far FUN_10a0_0fc8(void);
int __cdecl16far FUN_10a0_0fdc(byte *param_1);
undefined4 __stdcall16far FUN_10a0_1030(uint param_1,uint param_2,uint param_3,uint param_4);
byte * __cdecl16far FUN_10a0_105c(void);
uint __cdecl16far FUN_10a0_147e(byte *param_1);
bool __cdecl16far FUN_10a0_1502(double *param_1);
void __cdecl16far FUN_10a0_1538(int param_1,float *param_2,char *param_3);
undefined * __cdecl16far FUN_10a0_1582(undefined2 *param_1,undefined *param_2,undefined2 param_3,int param_4,int param_5);
void __cdecl16far FUN_10a0_1704(undefined2 param_1,undefined2 param_2,undefined *param_3,undefined2 param_4,int param_5,int param_6);
undefined * __cdecl16far FUN_10a0_1738(undefined2 *param_1,undefined *param_2,undefined2 param_3,undefined *param_4);
void __cdecl16far FUN_10a0_1888(undefined2 param_1,undefined2 param_2,undefined *param_3,undefined2 param_4,undefined *param_5);
void __cdecl16far FUN_10a0_18ba(undefined2 *param_1,undefined *param_2,undefined2 param_3,undefined *param_4,int param_5);
void __cdecl16far FUN_10a0_1990(undefined2 param_1,undefined2 param_2,undefined *param_3,undefined2 param_4,int param_5,undefined *param_6,int param_7);
void FUN_10a0_19fe(int param_1,int param_2,undefined2 param_3);
void FUN_10a0_1a32(void);
void FUN_10a0_1a62(void);
char FUN_10a0_1a8e(undefined2 param_1_00,undefined8 param_2,double param_3);
uint __cdecl16far FUN_10a0_1ac1(void);
void __cdecl16near FUN_10a0_1c06(void);
void FUN_10a0_1c0b(void);
int * __stdcall16far FUN_10a0_1c12(int param_1);
void __stdcall16far FUN_10a0_1c49(int param_1);
void __cdecl16near FUN_10a0_1c86(void);
undefined2 __cdecl16far FUN_10a0_1cb4(void);
void __cdecl16far FUN_10a0_1cc4(char *param_1);
void __cdecl16far FUN_10a0_1d10(undefined2 *param_1,int param_2,int param_3);
void __cdecl16far FUN_10a0_1daa(void);
uint __cdecl16far FUN_10a0_1df8(undefined4 param_1);
void __cdecl16far FUN_10a0_1e12(undefined2 *param_1,undefined2 *param_2);
uint * __cdecl16far FUN_10a0_1e4e(undefined4 param_1,uint param_2,uint param_3);
void FUN_10a0_1e96(void);
void FUN_10a0_1ed8(void);
undefined2 __cdecl16far FUN_10a0_24ea(undefined2 param_1,undefined *param_2,undefined *param_3,undefined *param_4);
undefined2 __cdecl16far FUN_10a0_253a(void);
undefined2 __cdecl16far ___EXPORTEDSTUB(void);
void __cdecl16near FUN_10a0_25f4(void);
void __cdecl16near FUN_10a0_265a(void);
int __cdecl16far FUN_10a0_267a(char *param_1);
undefined4 __cdecl16near FUN_10a0_26e3(void);
void __cdecl16near FUN_10a0_282e(void);
undefined2 __cdecl16far FUN_10a0_2ab8(int param_1);
HLOCAL16 __cdecl16far FUN_10a0_2b18(word param_1);
void __cdecl16far FUN_10a0_2b74(HLOCAL16 param_1);
void __cdecl16near FUN_10a0_2d8c(void);
uint FUN_10a0_2dca(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,double *param_6);
uint FUN_10a0_2e32(int param_1,undefined4 param_2,byte **param_3,uint *param_4);
void FUN_10a0_3352(int param_1,uint param_2,undefined2 *param_3);
uint * FUN_10a0_35ac(uint *param_1,int param_2,byte *param_3);
undefined4 __cdecl16near FUN_10a0_365a(void);
undefined __FPMATH();
void FATALEXIT(int code);
dword GETVERSION(void);
HLOCAL16 LOCALALLOC(word flags, word size);
HLOCAL16 LOCALREALLOC(HLOCAL16 handle, word size, word flags);
HLOCAL16 LOCALFREE(HLOCAL16 handle);
word LOCALSIZE(HLOCAL16 handle);
HGLOBAL16 GLOBALALLOC(word flags, dword size);
HGLOBAL16 GLOBALREALLOC(dword size, word flags);
HGLOBAL16 GLOBALFREE(HGLOBAL16 handle);
void * GLOBALLOCK(HGLOBAL16 handle);
bool16 GLOBALUNLOCK(HGLOBAL16 handle);
dword GLOBALSIZE(HGLOBAL16 handle);
HGLOBAL16 LOCKSEGMENT(HGLOBAL16 handle);
void UNLOCKSEGMENT(HGLOBAL16 handle);
bool16 WAITEVENT(HTASK16 htask);
int16 * GETMODULEFILENAME(int16 * __return_storage_ptr__, HINSTANCE16 hModule, char * lpfilename, int16 nsize);
void * MAKEPROCINSTANCE(void * func, HANDLE16 hinstance);
void FREEPROCINSTANCE(void * func);
HRSRC16 FINDRESOURCE(HMODULE16 hmodule, LPCSTR name, LPCSTR type);
HGLOBAL16 LOADRESOURCE(HMODULE16 hmodule, HRSRC16 hrsrc);
LPVOID LOCKRESOURCE(HGLOBAL16 handle);
bool16 FREERESOURCE(HGLOBAL16 handle);
int16 * ACCESSRESOURCE(int16 * __return_storage_ptr__, HINSTANCE16 hmodule, HRSRC16 hrsrc);
dword SIZEOFRESOURCE(HMODULE16 hmodule, HRSRC16 hrsrc);
HGLOBAL16 ALLOCRESOURCE(HMODULE16 hmodule, HRSRC16 hrsrc, dword size);
HFILE16 OPENFILE(LPCSTR name, OFSTRUCT * ofs, uint16 mode);
HFILE16 _LCLOSE(HFILE16 hfile);
uint16 * _LREAD(uint16 * __return_storage_ptr__, HFILE16 hfile, LPVOID buffer, uint16 count);
uint16 * _LWRITE(uint16 * __return_storage_ptr__, HFILE16 hfile, LPCSTR buffer, uint16 count);
dword LSTRCPY(dword dst, LPCSTR src);
dword LSTRCAT(dword dst, LPCSTR src);
int16 * LSTRLEN(int16 * __return_storage_ptr__, LPCSTR str);
void INITTASK(CONTEXT * context);
void DOS3CALL(CONTEXT * context);
void __AHSHIFT(void);
void __AHINCR(void);
uint16 * GETPRIVATEPROFILEINT(uint16 * __return_storage_ptr__, LPCSTR section, LPCSTR entry, int16 def_val, LPCSTR filename);
int16 * GETPRIVATEPROFILESTRING(int16 * __return_storage_ptr__, LPCSTR section, LPCSTR entry, LPCSTR def_val, LPSTR buffer, uint16 len, LPCSTR filename);
bool16 WRITEPRIVATEPROFILESTRING(LPCSTR section, LPCSTR entry, LPCSTR string, LPCSTR filename);
dword GETDOSENVIRONMENT(void);
void FATALAPPEXIT(uint16 action, LPCSTR str);
void __WINFLAGS(void);
COLORREF SETBKCOLOR(HDC16 hdc, COLORREF color);
int16 * SETBKMODE(int16 * __return_storage_ptr__, HDC16 hdc, int16 mode);
int16 * SETROP2(int16 * __return_storage_ptr__, HDC16 hdc, int16 mode);
COLORREF SETTEXTCOLOR(HDC16 hdc, COLORREF color);
int16 * SETWINDOWORG(int16 * __return_storage_ptr__, HWND16 hwnd, HRGN16 hrgn, bool16 redraw);
bool16 LINETO(HDC16 hdc, int16 x, int16 y);
dword MOVETO(HDC16 param_1, int16 x, int16 y);
int16 * EXCLUDECLIPRECT(int16 * __return_storage_ptr__, HDC16 hdc, int16 left, int16 top, int16 right, int16 bottom);
int16 * INTERSECTCLIPRECT(int16 * __return_storage_ptr__, HDC16 hdc, int16 left, int16 top, int16 right, int16 bottom);
bool16 ELLIPSE(HDC16 param_1, int16 left, int16 top, int16 right, int16 bottom);
bool16 PATBLT(HDC16 hdc, int16 left, int16 top, int16 width, int16 height, dword rop);
bool16 TEXTOUT(HDC16 hdc, int16 x, int16 y, LPCSTR str, int16 count);
bool16 BITBLT(HDC16 hdcdst, int16 xdst, int16 ydst, int16 width, int16 height, HDC16 hdcsrc, int16 xsrc, int16 ysrc, dword rop);
int16 * SELECTCLIPRGN(int16 * __return_storage_ptr__, HDC16 hdc, HRGN16 hrgn);
int16 * SELECTOBJECT(int16 * __return_storage_ptr__, HRGN16 hdest, HRGN16 hrsc1, HRGN16 hsrc2, int16 mode);
HBITMAP16 CREATECOMPATIBLEBITMAP(HDC16 hdc, int16 width, int16 height);
HDC16 CREATECOMPATIBLEDC(HDC16 hdc);
HFONT16 CREATEFONTINDIRECT(LOGFONT16 * plf16);
HBRUSH16 CREATEPATTERNBRUSH(HBITMAP16 hbitmap);
HPEN16 CREATEPEN(int16 style, int16 width, COLORREF color);
HRGN16 CREATERECTRGN(int16 left, int16 top, int16 right, int16 bottom);
HBRUSH16 CREATESOLIDBRUSH(COLORREF color);
bool16 DELETEDC(HDC16 hdc);
bool16 DELETEOBJECT(HGDIOBJ16 obj);
COLORREF GETBKCOLOR(HDC16 hdc);
int16 * GETDEVICECAPS(int16 * __return_storage_ptr__, HDC16 hdc, int16 cap);
int16 * GETOBJECT(int16 * __return_storage_ptr__, HGDIOBJ16 handle, int16 count, LPVOID buffer);
HGDIOBJ16 GETSTOCKOBJECT(int16 obj);
dword GETTEXTEXTENT(HDC16 hdc, LPCSTR str, int16 count);
bool16 GETTEXTMETRICS(HDC16 hdc, TEXTMETRIC16 * tm);
int16 * MULDIV(int16 * __return_storage_ptr__, int16 multiplicand, int16 nMultiplier, int16 nDivisor);
bool16 EXTTEXTOUT(HDC16 hdc, int16 x, int16 y, uint16 flags);
HPALETTE16 CREATEPALETTE(LOGPALETTE * palette);
int16 * STRETCHDIBITS(int16 * __return_storage_ptr__, HDC16 hdc, int16 xdst, int16 ydst, int16 widthdist, int16 heighdist, int16 xsrc, int16 ysrc, int16 widthsrc, int16 heightsrc, void * bits, bitmapinfo * info, uint16 wusage, dword dwrop);
int16 * GETDIBITS(int16 * __return_storage_ptr__, HDC16 hdc, HBITMAP16 hbitmap, uint16 startscan, uint16 lines, LPVOID bits, bitmapinfo * info, uint16 coloruse);
int16 * MESSAGEBOX(int16 * __return_storage_ptr__, HWND16 hwnd, LPCSTR text, LPCSTR title, uint16 type);
int16 * INITAPP(int16 * __return_storage_ptr__, HINSTANCE16 hinstance);
void POSTQUITMESSAGE(int16 exitCode);
uint16 * SETTIMER(uint16 * __return_storage_ptr__, HWND16 hwnd, uint16 id, uint16 timeout, void * timerProc);
bool16 KILLTIMER(HWND16 hwnd, uint16 id);
dword GETTICKCOUNT(void);
dword GETCURRENTTIME(void);
bool16 GETCURSORPOS(POINT16 * pt);
HWND16 SETCAPTURE(HWND16 param_1);
bool16 RELEASECAPTURE(void);
HWND16 SETFOCUS(HWND16 hwnd);
HWND16 GETFOCUS(void);
void CLIENTTOSCREEN(HWND16 hwnd, POINT16 * pnt);
void SCREENTOCLIENT(HWND16 hwnd, POINT16 * lppnt);
HWND16 WINDOWFROMPOINT(POINT16 pt);
bool16 ISICONIC(HWND16 hwnd);
void GETWINDOWRECT(HWND16 hwnd, RECT16 * rect);
void GETCLIENTRECT(HWND16 hwnd, RECT16 * rect);
bool16 ENABLEWINDOW(HWND16 hwnd, bool16 enable);
int16 * GETWINDOWTEXT(int16 * __return_storage_ptr__, HWND16 hwnd, dword lpString, int16 nMaxCount);
bool16 SETWINDOWTEXT(HWND16 hwnd, dword lpstring);
HDC16 BEGINPAINT(HWND16 hwnd, PAINTSTRUCT16 * lps);
bool16 ENDPAINT(HWND16 hwnd, PAINTSTRUCT16 * lps);
HWND16 CREATEWINDOW(LPCSTR className, LPCSTR windowName, dword style, int16 x, int16 y, int16 width, int16 height, HWND16 parent, HMENU16 menu, HINSTANCE16 instance, LPVOID data);
bool16 SHOWWINDOW(HWND16 hwnd, int16 cmd);
bool16 ISWINDOWVISIBLE(HWND16 hwnd);
bool16 DESTROYWINDOW(HWND16 hwnd);
bool16 MOVEWINDOW(HWND16 hwnd, int16 x, int16 y, int16 cx, int16 cy, bool16 repaint);
ATOM REGISTERCLASS(WNDCLASS * wc);
void SCROLLWINDOW(HWND16 hwnd, int16 dx, int16 dy, RECT16 * rect);
int16 * SETSCROLLPOS(int16 * __return_storage_ptr__, HWND16 hwnd, int16 nBar, int16 nPos, bool16 redraw);
int16 * GETSCROLLPOS(int16 * __return_storage_ptr__, HWND16 hwnd, int16 nBar);
void SETSCROLLRANGE(HWND16 hwnd, int16 nBar, int16 minVal, int16 maxVal, bool16 redraw);
HDC16 GETDC(HWND16 hwnd);
int16 * RELEASEDC(int16 * __return_storage_ptr__, HWND16 hwnd, HDC16 hdc);
HCURSOR16 SETCURSOR(HCURSOR16 hCursor);
void SETRECT(RECT16 * rect, int16 left, int16 top, int16 right, int16 bottom);
bool16 COPYRECT(RECT16 * dest, RECT16 * src);
bool16 PTINRECT(RECT16 * rect, POINT16 pt);
void OFFSETRECT(RECT16 * rect, int16 x, int16 y);
bool16 INFLATERECT(RECT16 * dest, int16 x, int16 y);
bool16 INTERSECTRECT(RECT16 * dest, RECT16 * src1, RECT16 * src2);
int16 * FILLRECT(int16 * __return_storage_ptr__, HDC16 hdc, RECT16 * rect, HBRUSH16 hbrush);
int16 * FRAMERECT(int16 * __return_storage_ptr__, HDC16 hdc, RECT16 * rect16, HBRUSH16 hbrush);
bool16 DRAWICON(HDC16 hdc, int16 x, int16 u, HICON16 hIcon);
int16 * DRAWTEXT(int16 * __return_storage_ptr__, HDC16 hdc, LPCSTR str, int16 count, RECT16 * rect, uint16 flags);
int16 * DIALOGBOX(int16 * __return_storage_ptr__, HINSTANCE16 hInst, LPCSTR dlgTemplate, HWND16 owner, void * dlgProc);
bool16 ENDDIALOG(HWND16 hwn, int16 retval);
HWND16 CREATEDIALOG(HINSTANCE16 hInst, LPCSTR dlgTemplate, HWND16 owner, void * dlgProc);
HWND16 GETDLGITEM(HWND16 hwndDlg, int16 id);
void SETDLGITEMTEXT(HWND16 hwnd, int16 id, dword lpString);
int16 * GETDLGITEMTEXT(int16 * __return_storage_ptr__, HWND16 hwnd, int16 id, dword str, uint16 len);
bool16 CHECKRADIOBUTTON(HWND16 hwndDlg, uint16 firstId, uint16 lastId, uint16 checkId);
bool16 CHECKDLGBUTTON(HWND16 hwnd, int16 id, uint16 check);
uint16 * ISDLGBUTTONCHECKED(uint16 * __return_storage_ptr__, HWND16 hwnd, uint16 id);
LRESULT SENDDLGITEMMESSAGE(HWND16 hwnd, int16 id, WPARAM16 wParam, LPARAM lParam);
void MESSAGEBEEP(uint16 i);
bool16 FLASHWINDOW(HWND16 hwnd, bool16 bInvert);
LRESULT DEFWINDOWPROC(HWND16 hwnd16, uint16 msg, WPARAM16 wParam, LPARAM lParam);
bool16 GETMESSAGE(MSG16 * msg, HWND16 hwnd, uint16 first, uint16 last);
bool16 PEEKMESSAGE(MSG16 * msg, HWND16 hwnd, uint16 first, uint16 last, uint16 flags);
bool16 POSTMESSAGE(HWND16 hwnd, uint16 msg, WPARAM16 wparam, LPARAM lparam);
LRESULT SENDMESSAGE(HWND16 hwnd, uint16 msg, WPARAM16 wparam, LPARAM lparam);
bool16 TRANSLATEMESSAGE(MSG16 * msg);
long DISPATCHMESSAGE(MSG16 * msg);
LRESULT CALLWINDOWPROC(void * wndproc_func, HWND16 hwnd, uint16 msg, WPARAM16 wParam, LPARAM lparam);
void UPDATEWINDOW(HWND16 hwnd);
void INVALIDATERECT(HWND16 hwnd, RECT16 * rect, bool16 erase);
void VALIDATERECT(HWND16 hwnd, RECT16 * rect);
long GETWINDOWLONG(HWND16 hwnd, int16 offset);
long SETWINDOWLONG(HWND16 hwnd, int16 offset, long newval);
bool16 DESTROYMENU(HMENU16 hmenu);
bool16 CHECKMENUITEM(HMENU16 hmenu, uint16 id, uint16 flags);
bool16 ENABLEMENUITEM(HMENU16 hmenu, uint16 wItemId, uint16 wFlags);
HMENU16 GETMENU(HWND16 hwnd);
HMENU16 GETSUBMENU(HMENU16 hmenu, int16 nPos);
void DRAWMENUBAR(HWND16 hwnd);
bool16 WINHELP(HWND16 hwnd, LPCSTR lpHelpFile, uint16 wCommand);
HCURSOR16 LOADCURSOR(HINSTANCE16 hInstance, LPCSTR name);
HICON16 LOADICON(HINSTANCE16 hInstance, LPCSTR name);
HBITMAP16 LOADBITMAP(HINSTANCE16 hInstance, LPCSTR name);
HACCEL16 LOADACCELERATORS(HINSTANCE16 instance, LPCSTR lpTableName);
int16 * TRANSLATEACCELERATOR(int16 * __return_storage_ptr__, HWND16 hwnd, HACCEL16 param_2, LPMSG16 msg);
int16 * GETSYSTEMMETRICS(int16 * __return_storage_ptr__, int16 index);
COLORREF GETSYSCOLOR(int16 index);
bool16 SETWINDOWPOS(HWND16 hwnd, HWND16 hwndInsertAfter, int16 x, int16 y, int16 cx, int16 cy, word flags);
int16 * GETASYNCKEYSTATE(int16 * __return_storage_ptr__, int16 key);
void MAPWINDOWPOINTS(HWND16 hwndFrom, HWND16 hwndTo, POINT16 * lppt, uint16 count);
HWND16 GETWINDOW(HWND16 hwnd, WORD rel);
int16 * GETMENUITEMCOUNT(int16 * __return_storage_ptr__, HMENU16 hMenu);
bool16 ISZOOMED(HWND16 hwnd);
HPALETTE16 SELECTPALETTE(HDC16 hdc, HPALETTE16 hpal, bool16 bForceBackground);
uint16 * REALIZEPALETTE(uint16 * __return_storage_ptr__, HDC16 hdc);
undefined GETWINDOWPLACEMENT(HWND16 hwnd, WINDOWPLACEMENT16 * wp16);
bool16 APPENDMENU(HMENU16 hMenu, uint16 flags, uint16 id, dword data);
HMENU16 CREATEPOPUPMENU(void);
bool16 TRACKPOPUPMENU(HMENU16 hMenu, uint16 wFlags, int16 x, int16 y, int16 nReserved, HWND16 hwnd, RECT16 * lpRect);
int16 * _WSPRINTF(int16 * __return_storage_ptr__, LPSTR buffer, LPCSTR spec, VA_LIST16 valist);
bool16 DESTROYICON(HICON16 hIcon);
bool16 DESTROYCURSOR(HCURSOR16 hCursor);
bool16 GETOPENFILENAME(dword ofn);
bool16 GETSAVEFILENAME(dword ofn);

