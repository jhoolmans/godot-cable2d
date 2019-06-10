/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "editor/editor_node.h"
#include "cable2d.h"
#include "cable2d_editor_plugin.h"


static void editor_init_callback() {
    EditorNode::get_singleton()->add_editor_plugin(memnew(Cable2DEditorPlugin(EditorNode::get_singleton())));
}

void register_cable2d_types() {
    ClassDB::register_class<Cable2D>();

#ifdef TOOLS_ENABLED
    EditorNode::add_init_callback(editor_init_callback);
#endif

}

void unregister_cable2d_types() {
    // Nothing to do here.
}
