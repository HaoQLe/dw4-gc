#ifndef UNKNOWN8004577C_H
#define UNKNOWN8004577C_H
#include "unknown800442F8.h"
inline int unknown80045D08Space(int value){extern unsigned char __ctype_map[256];return __ctype_map[static_cast<unsigned char>(value)]&6;}
struct Unknown800468E8 { Unknown800442F8Stream *unknown00,*unknown04; void *unknown08; };
struct Unknown800469E8 : Unknown800442F8Node { Unknown800442F8Nodes *unknown08; Unknown800442F8Stream *unknown0C; };
struct Unknown80046B98 : Unknown800442F8Node { int unknown08; Unknown800442F8Stream *unknown0C; Unknown800442F8Nodes *unknown10; int unknown14; Unknown800442F8Stream *unknown18; };
extern "C" void fn_80071F04(void *,const char *,unsigned int);
extern "C" int strcmp(const char *,const char *);
inline int unknown8004577CCompare(Unknown800442F8Stream *stream,const char *text){return strcmp(stream->unknown08.text(),text);}
inline void unknown8004577CCopy(void *dest,Unknown800442F8Stream *source){const char *text=source->unknown08.value;unsigned int length=reinterpret_cast<unsigned int>(source->unknown0C);if(!text) text=lbl_8055DC4C;fn_80071F04(dest,text,length);}
inline void unknown8004577CRelease(Unknown800442F8Stream *value){--value->unknown04;if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);}
struct Unknown800468E8Base { Unknown800442F8Stream *unknown00,*unknown04; };
struct Unknown800468E8Virtual : Unknown800468E8Base {virtual ~Unknown800468E8Virtual();};
extern "C" {
extern unsigned char __ctype_map[256];
extern char lbl_80468F7C[],lbl_80468FC4[],lbl_80472C30[],lbl_80472C24[],lbl_80472C18[];
extern char lbl_8055D804[8];
extern const char *lbl_8041353C[3];
extern void *lbl_805621F8,*lbl_805621E8,*lbl_80562200;
extern unsigned char lbl_80562298;
void *fn_800607F4(void *);
int sscanf(const char *,const char *,...);
int strcmp(const char *,const char *);
int fn_80077768(const char *,const char *);
int fn_8007784C(const char *,const char *,unsigned int);
extern char lbl_8055D4C4[2];
unsigned char fn_8006D674(void *,int,const char *,Unknown800442F8Reference *,const char *,int);
void fn_8006E358(void *,int,const char *,const char *);
void fn_80071F04(void *,const char *,unsigned int);
int fn_8006D2E8(void *,const char *,int);
void *fn_80056138(unsigned int,void *);
unsigned char fn_80046254(Unknown800442F8Owner *,Unknown80046B98 *);
inline int unknown80045FA4Byte(const char *p){return *reinterpret_cast<const unsigned char *>(p);}
extern const char *lbl_80413508[13];
extern char lbl_80468F70[];
bool fn_800464BC(void *object,int kind,const char *first,int operation,const char *second);
const char *fn_800447F4(Unknown800442F8Owner *,int,const char *);
const char *fn_800442D4(Unknown800442F8Owner *,int);
extern char lbl_8055D80C[5],lbl_8055D814[5];
extern const float lbl_80566220;
unsigned char fn_80072240(void *,unsigned char *);
Unknown800442F8Node *fn_8004577C(Unknown800442F8Owner *object);
void fn_8004595C(Unknown800442F8Owner *object,void *entry,void *dest,void *second);
void fn_80045AB4(void *owner,Unknown80042DECStorage *storage,void *dest,int index);
int fn_80045BA8(Unknown800442F8Owner *object,Unknown800442F8Stream *stream,void *dest,int fallback);
void fn_80045D08(Unknown800442F8Owner *object);
void fn_80045D54(void *,char *text);
unsigned char fn_80045DC0(Unknown800442F8Owner *object,Unknown800442F8Stream **value);
unsigned char fn_80045E54(Unknown800442F8Owner *object,Unknown800442F8Stream **value);
unsigned char fn_80045EF4(Unknown800442F8Owner *object,int *value);
unsigned char fn_80045FA4(Unknown800442F8Owner *object,void *value);
unsigned char fn_80046254(Unknown800442F8Owner *object,Unknown80046B98 *node);
unsigned char fn_800463E8(Unknown800442F8Owner *object,Unknown800442F8Stream **value);
int fn_80046474(void *,int value);
bool fn_80046718(void *,const char *first,int operation,const char *second);
bool fn_800467C8(void *,int first,int operation,int second);
bool fn_80046828(void *,double first,int operation,double second);
bool fn_8004688C(void *,unsigned char first,int operation,unsigned char second);
void *fn_800468E8(Unknown800468E8 *object);
Unknown800468E8 *fn_80046940(Unknown800468E8 *object,int flag);
Unknown800469E8 *fn_800469E8(Unknown800469E8 *object);
Unknown800469E8 *fn_80046A6C(Unknown800469E8 *object,int flag);
Unknown80046B98 *fn_80046B98(Unknown80046B98 *object,int value);
Unknown80046B98 *fn_80046C28(Unknown80046B98 *object,int flag);
}
#endif
