#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
extern void *igViewerAction_meta;
extern void *igViewerSceneInfoManager_meta;
extern void *lbl_8055C854;
extern void *igViewerSceneInfoManagerController_meta;
extern void *igViewerParameters_meta;
extern void *lbl_80563624;
}
extern "C" {
void *igViewerAction_virtual58(){return igViewerAction_meta;}
void *fn_8040EB9C(){return igViewerSceneInfoManager_meta;}
void *fn_8040EBAC(){return lbl_8055C854;}
void fn_8040EBBC(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,lbl_80563624);
}
void *igViewerSceneInfoManagerController_virtual58(){return igViewerSceneInfoManagerController_meta;}
void igViewerSceneInfoManagerController_virtual5C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,igViewerParameters_meta);
}
}
#pragma pop
