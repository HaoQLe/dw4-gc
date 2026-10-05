#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284550();
void fn_80286F0C();
void fn_80402E28();
void *fn_80403CDC();
void fn_80403D28();
void fn_804046FC();
extern char lbl_80461E58[];
extern char lbl_804F0078[];
extern char lbl_8055C788[];
void fn_80404660();
void *fn_804046DC();
}
extern "C" {
void fn_80404638(){
 fn_80066188((int)fn_80404660);
}
void fn_80404660(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C788,(int)fn_80286F0C,(int)fn_80284550,(int)fn_804046DC,(int)lbl_80461E58,200,(int)fn_80403D28,(int)fn_804046FC,0,(int)lbl_804F0078);
}
void *fn_804046DC(){return fn_80403CDC();}
}
#pragma pop
