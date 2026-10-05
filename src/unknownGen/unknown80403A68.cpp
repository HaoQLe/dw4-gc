#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801159FC();
void fn_80115AA4();
void fn_80402E28();
void *fn_804039C8();
void fn_80403A14();
void fn_80403B2C();
extern char lbl_80461E00[];
extern char lbl_804F0038[];
extern char lbl_8055C778[];
void fn_80403A90();
void *fn_80403B0C();
}
extern "C" {
void fn_80403A68(){
 fn_80066188((int)fn_80403A90);
}
void fn_80403A90(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C778,(int)fn_80115AA4,(int)fn_801159FC,(int)fn_80403B0C,(int)lbl_80461E00,24,(int)fn_80403A14,(int)fn_80403B2C,0,(int)lbl_804F0038);
}
void *fn_80403B0C(){return fn_804039C8();}
}
#pragma pop
