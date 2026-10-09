#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80153534();
void igAttrEdit_register();
extern char lbl_804A0284[];
extern char lbl_8055FD80[8];
extern void *lbl_8056458C;
extern void *lbl_80564594;
void *igAttrEditForNode_getMeta();
void fn_80153474();
void igAttrEditForNode_register();
void *igAttrEditForNode_getMetaCall();
void *igAttrEditForNode_parentMeta();
}
extern "C" {
void *igAttrEditForNode_getMeta(){
 if(!lbl_8056458C || !(reinterpret_cast<unsigned int *>(lbl_8056458C)[0x24/4]&4)) fn_80153474();
 return lbl_8056458C;
}
void fn_80153474(){
 fn_80066188((int)igAttrEditForNode_register);
}
void igAttrEditForNode_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056458C,(int)igAttrEdit_register,(int)igAttrEditForNode_parentMeta,(int)igAttrEditForNode_getMetaCall,(int)lbl_804A0284,40,0,(int)fn_80153534,0,(int)lbl_8055FD80);
}
void *igAttrEditForNode_getMetaCall(){return igAttrEditForNode_getMeta();}
void *igAttrEditForNode_parentMeta(){return lbl_80564594;}
}
#pragma pop
