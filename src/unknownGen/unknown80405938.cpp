#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80402E28();
void *fn_80405408();
void fn_80405454();
void fn_804059FC();
extern char lbl_80462210[];
extern char lbl_804F0450[];
extern char lbl_8055C880[];
void fn_80405960();
void *fn_804059DC();
}
extern "C" {
void fn_80405938(){
 fn_80066188((int)fn_80405960);
}
void fn_80405960(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C880,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_804059DC,(int)lbl_80462210,92,(int)fn_80405454,(int)fn_804059FC,0,(int)lbl_804F0450);
}
void *fn_804059DC(){return fn_80405408();}
}
#pragma pop
