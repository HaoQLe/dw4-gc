#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelObjectStat_fieldInit();
void *beNDMWPanelObjectStat_getMeta();
void beNDMWPanelObjectStat_vtableRead();
void beNDMWPanelObject_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
extern char beNDMWPanelObjectStat_className[];
extern char beNDMWPanelObjectStat_dependencies[];
extern char beNDMWPanelObjectStat_meta[];
void beNDMWPanelObjectStat_register();
void *beNDMWPanelObjectStat_getMetaCall();
}
extern "C" {
void beNDMWPanelObjectStat_arkRegister(){
 meta_registerNow((int)beNDMWPanelObjectStat_register);
}
void beNDMWPanelObjectStat_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWPanelObjectStat_meta,(int)beNDMWPanelObject_register,(int)fn_80337428,(int)beNDMWPanelObjectStat_getMetaCall,(int)beNDMWPanelObjectStat_className,72,(int)beNDMWPanelObjectStat_vtableRead,(int)beNDMWPanelObjectStat_fieldInit,0,(int)beNDMWPanelObjectStat_dependencies);
}
void *beNDMWPanelObjectStat_getMetaCall(){return beNDMWPanelObjectStat_getMeta();}
}
#pragma pop
