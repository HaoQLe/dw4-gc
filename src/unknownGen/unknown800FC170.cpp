#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void GXSetDrawSyncCallback(int);
void fn_800FC0C4();
void fn_80260DA8(int,int);
extern char lbl_804F6520[];
}
extern "C" {
void fn_800FC170(){
 fn_80260DA8((int)lbl_804F6520,0);
 GXSetDrawSyncCallback((int)fn_800FC0C4);
}
}
#pragma pop
