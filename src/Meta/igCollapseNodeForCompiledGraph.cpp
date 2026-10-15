// igCollapseNodeForCompiledGraph: Alchemy class registration (0x8014F760..0x8014F948). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollapseNodeForCompiledGraph)
META_DECLARE(igCollapseNode)

extern "C" {
void fn_8012FC48();
void *fn_80148B20();
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8050[];
extern char lbl_804AAF48[];
}

struct Instance_804A8050 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _node;
    igObjectRefMember _replaceNode;
    inline ~Instance_804A8050() { __vtable = lbl_804A8050; }
};

struct igCollapseNodeForCompiledGraphInstance : Instance_804A8050 {
    char unknown28[8];
    inline ~igCollapseNodeForCompiledGraphInstance() { __vtable = igCollapseNodeForCompiledGraph_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollapseNodeForCompiledGraph)

void *igCollapseNodeForCompiledGraph_vtableRead()
{
    igCollapseNodeForCompiledGraphInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A8050;
    object._node._value = 0;
    object._replaceNode._value = 0;
    object.__vtable = igCollapseNodeForCompiledGraph_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollapseNodeForCompiledGraph)

void igCollapseNodeForCompiledGraph_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCollapseNodeForCompiledGraph_meta, igCollapseNode_register,
                       fn_80148B20, igCollapseNodeForCompiledGraph_getMetaCall,
                       igCollapseNodeForCompiledGraph_className, 0x2C,
                       igCollapseNodeForCompiledGraph_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCollapseNodeForCompiledGraph)

}
#pragma pop
