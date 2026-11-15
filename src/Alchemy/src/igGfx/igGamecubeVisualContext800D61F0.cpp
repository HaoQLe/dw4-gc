// igGamecubeVisualContext: the class's vtable read (0x800D61F0..0x800D62EC). A temporary instance is built
// through the inline constructors of igContext, igVisualContext and igGamecubeVisualContext, and destroyed by
// the class's out-of-line destructor.
// NonMatching (91.7%): the original keeps the instance's address in r31 for the igVisualContext level, the
// member constructions and the destructor call, and addresses the igContext and igGamecubeVisualContext
// stores from r1. Real C++ members (an out-of-line igMatrix44f constructor, an element class with constructor
// and destructor for _vertexArray2, an out-of-line destructor) move every level to r31 and need C++ names for
// fn_801285A0, fn_800A33B8, fn_800D6734, fn_800B6694 and fn_800D62EC.
#include <meta/register.h>

META_DECLARE(igGamecubeVisualContext)

extern "C" {
extern char lbl_80473000[];   // igContext's vtable
extern char lbl_80491D8C[];   // igVisualContext's vtable
void fn_801285A0(void *matrix);   // constructs a 4x4 matrix
void fn_800A33B8(void *array, void (*construct)(void *), void (*destroy)(void *), unsigned int size,
                 unsigned int count);
void fn_800D6734(void *element);
void fn_800B6694(void *element);
void fn_800D62EC(void *object, int flags);   // igGamecubeVisualContext's destructor
}

struct igContextInstance : igObjectInstance {
    char unknown04[4];
    void *_pExtList;        // 0x08
    int _iNumExts;          // 0x0C
    void *_pExtInstances;   // 0x10
    inline igContextInstance()
    {
        __vtable = lbl_80473000;
        _pExtList = 0;
        _pExtInstances = 0;
    }
};

struct igVisualContextInstance : igContextInstance {
    int _contextIndex;     // 0x14
    void *_pools[8];       // 0x18: driver data, vertex, internal, temporary, image, texture, statistics, list
    void *_timer;          // 0x38
    char unknown3C[0x30];
    char _viewMatrixHint[0x40];      // 0x6C
    char _viewMatrixInverse[0x40];   // 0xAC
    char unknownEC[4];
    void *_vertexArray2[16];         // 0xF0
    void *_customStates;             // 0x130
    void *_customFields;             // 0x134
    char unknown138[8];
    inline igVisualContextInstance()
    {
        __vtable = lbl_80491D8C;
        _pools[0] = 0;
        _pools[1] = 0;
        _pools[2] = 0;
        _pools[3] = 0;
        _pools[4] = 0;
        _pools[5] = 0;
        _pools[6] = 0;
        _pools[7] = 0;
        _timer = 0;
        fn_801285A0(_viewMatrixHint);
        fn_801285A0(_viewMatrixInverse);
        fn_800A33B8(_vertexArray2, fn_800D6734, fn_800B6694, 4, 16);
        _customStates = 0;
        _customFields = 0;
    }
};

struct igGamecubeVisualContextInstance : igVisualContextInstance {
    char unknown140[0x13C];
    char unknown27C[0x40];   // a 4x4 matrix
    char unknown2BC[0x178];
    void *unknown434;        // 0x434..0x45C: counted references, released by the destructor
    void *unknown438;
    void *unknown43C;
    char unknown440[0x18];
    void *unknown458;
    void *unknown45C;
    char unknown460[0x288];
    inline igGamecubeVisualContextInstance()
    {
        __vtable = igGamecubeVisualContext_vtable;
        fn_801285A0(unknown27C);
        unknown434 = 0;
        unknown438 = 0;
        unknown43C = 0;
        unknown458 = 0;
        unknown45C = 0;
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

void *igGamecubeVisualContext_vtableRead()
{
    igGamecubeVisualContextInstance object;
    void *vtable = meta_vtableOf(&object);
    fn_800D62EC(&object, -1);
    return vtable;
}

}
#pragma pop
