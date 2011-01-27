/* dacplisten.c generated by valac 0.11.4, the Vala compiler
 * generated from dacplisten.vala, do not modify */

/*   FILE: dacplisten.vala -- Listen to DACP remotes
 * AUTHOR: W. Michael Petullo <mike@flyn.org>
 *   DATE: 06 January 2011 
 *
 * Copyright (c) 2011 W. Michael Petullo <new@flyn.org>
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <glib.h>
#include <glib-object.h>
#include <libdmapsharing/dmap.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_VALA_DACP_PLAYER (vala_dacp_player_get_type ())
#define VALA_DACP_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DACP_PLAYER, ValaDACPPlayer))
#define VALA_DACP_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DACP_PLAYER, ValaDACPPlayerClass))
#define IS_VALA_DACP_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DACP_PLAYER))
#define IS_VALA_DACP_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DACP_PLAYER))
#define VALA_DACP_PLAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DACP_PLAYER, ValaDACPPlayerClass))

typedef struct _ValaDACPPlayer ValaDACPPlayer;
typedef struct _ValaDACPPlayerClass ValaDACPPlayerClass;
typedef struct _ValaDACPPlayerPrivate ValaDACPPlayerPrivate;

#define TYPE_DACP_LISTENER (dacp_listener_get_type ())
#define DACP_LISTENER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DACP_LISTENER, DACPListener))
#define DACP_LISTENER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DACP_LISTENER, DACPListenerClass))
#define IS_DACP_LISTENER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DACP_LISTENER))
#define IS_DACP_LISTENER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DACP_LISTENER))
#define DACP_LISTENER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DACP_LISTENER, DACPListenerClass))

typedef struct _DACPListener DACPListener;
typedef struct _DACPListenerClass DACPListenerClass;
typedef struct _DACPListenerPrivate DACPListenerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_VALA_DMAP_DB (vala_dmap_db_get_type ())
#define VALA_DMAP_DB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DMAP_DB, ValaDMAPDb))
#define VALA_DMAP_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DMAP_DB, ValaDMAPDbClass))
#define IS_VALA_DMAP_DB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DMAP_DB))
#define IS_VALA_DMAP_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DMAP_DB))
#define VALA_DMAP_DB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DMAP_DB, ValaDMAPDbClass))

typedef struct _ValaDMAPDb ValaDMAPDb;
typedef struct _ValaDMAPDbClass ValaDMAPDbClass;

#define TYPE_VALA_DMAP_CONTAINER_DB (vala_dmap_container_db_get_type ())
#define VALA_DMAP_CONTAINER_DB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDb))
#define VALA_DMAP_CONTAINER_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDbClass))
#define IS_VALA_DMAP_CONTAINER_DB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DMAP_CONTAINER_DB))
#define IS_VALA_DMAP_CONTAINER_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DMAP_CONTAINER_DB))
#define VALA_DMAP_CONTAINER_DB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDbClass))

typedef struct _ValaDMAPContainerDb ValaDMAPContainerDb;
typedef struct _ValaDMAPContainerDbClass ValaDMAPContainerDbClass;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))

struct _ValaDACPPlayer {
	GObject parent_instance;
	ValaDACPPlayerPrivate * priv;
};

struct _ValaDACPPlayerClass {
	GObjectClass parent_class;
};

struct _DACPListener {
	GObject parent_instance;
	DACPListenerPrivate * priv;
};

struct _DACPListenerClass {
	GObjectClass parent_class;
};

struct _DACPListenerPrivate {
	DMAPDb* db;
	DMAPContainerDb* container_db;
	DACPPlayer* player;
	DACPShare* share;
};


static gpointer vala_dacp_player_parent_class = NULL;
static DACPPlayerIface* vala_dacp_player_dacp_player_parent_iface = NULL;
static gpointer dacp_listener_parent_class = NULL;

GType vala_dacp_player_get_type (void) G_GNUC_CONST;
enum  {
	VALA_DACP_PLAYER_DUMMY_PROPERTY
};
static DAAPRecord* vala_dacp_player_real_now_playing_record (DACPPlayer* base);
static guchar* vala_dacp_player_real_now_playing_artwork (DACPPlayer* base, guint width, guint heigth, int* result_length1);
static void vala_dacp_player_real_play_pause (DACPPlayer* base);
static void vala_dacp_player_real_pause (DACPPlayer* base);
static void vala_dacp_player_real_next_item (DACPPlayer* base);
static void vala_dacp_player_real_prev_item (DACPPlayer* base);
static void vala_dacp_player_real_cue_clear (DACPPlayer* base);
static void vala_dacp_player_real_cue_play (DACPPlayer* base, GList* records, guint index);
ValaDACPPlayer* vala_dacp_player_new (void);
ValaDACPPlayer* vala_dacp_player_construct (GType object_type);
GType dacp_listener_get_type (void) G_GNUC_CONST;
#define DACP_LISTENER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_DACP_LISTENER, DACPListenerPrivate))
enum  {
	DACP_LISTENER_DUMMY_PROPERTY
};
DACPListener* dacp_listener_new (void);
DACPListener* dacp_listener_construct (GType object_type);
ValaDMAPDb* vala_dmap_db_new (void);
ValaDMAPDb* vala_dmap_db_construct (GType object_type);
GType vala_dmap_db_get_type (void) G_GNUC_CONST;
ValaDMAPContainerDb* vala_dmap_container_db_new (void);
ValaDMAPContainerDb* vala_dmap_container_db_construct (GType object_type);
GType vala_dmap_container_db_get_type (void) G_GNUC_CONST;
static void _lambda0_ (const gchar* service_name, const gchar* display_name, DACPListener* self);
static void __lambda0__dacp_share_remote_found (DACPShare* _sender, const gchar* service_name, const gchar* remote_name, gpointer self);
static void _lambda1_ (const gchar* guid, DACPListener* self);
static void __lambda1__dacp_share_add_guid (DACPShare* _sender, const gchar* guid, gpointer self);
static void dacp_listener_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);


static DAAPRecord* vala_dacp_player_real_now_playing_record (DACPPlayer* base) {
	ValaDACPPlayer * self;
	DAAPRecord* result = NULL;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Now playing record request received\n");
	result = NULL;
	return result;
}


static guchar* vala_dacp_player_real_now_playing_artwork (DACPPlayer* base, guint width, guint heigth, int* result_length1) {
	ValaDACPPlayer * self;
	guchar* result = NULL;
	gpointer _tmp0_;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Now playing artwork request received\n");
	_tmp0_ = NULL;
	*result_length1 = 0;
	result = _tmp0_;
	return result;
}


static void vala_dacp_player_real_play_pause (DACPPlayer* base) {
	ValaDACPPlayer * self;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Play/pause request received\n");
}


static void vala_dacp_player_real_pause (DACPPlayer* base) {
	ValaDACPPlayer * self;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Pause request received\n");
}


static void vala_dacp_player_real_next_item (DACPPlayer* base) {
	ValaDACPPlayer * self;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Next item request received\n");
}


static void vala_dacp_player_real_prev_item (DACPPlayer* base) {
	ValaDACPPlayer * self;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Previous item request received\n");
}


static void vala_dacp_player_real_cue_clear (DACPPlayer* base) {
	ValaDACPPlayer * self;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Cue clear request received\n");
}


static void vala_dacp_player_real_cue_play (DACPPlayer* base, GList* records, guint index) {
	ValaDACPPlayer * self;
	self = (ValaDACPPlayer*) base;
	fprintf (stdout, "Cue play request received\n");
}


ValaDACPPlayer* vala_dacp_player_construct (GType object_type) {
	ValaDACPPlayer * self = NULL;
	self = (ValaDACPPlayer*) g_object_new (object_type, NULL);
	return self;
}


ValaDACPPlayer* vala_dacp_player_new (void) {
	return vala_dacp_player_construct (TYPE_VALA_DACP_PLAYER);
}


static void vala_dacp_player_class_init (ValaDACPPlayerClass * klass) {
	vala_dacp_player_parent_class = g_type_class_peek_parent (klass);
}


static void vala_dacp_player_dacp_player_interface_init (DACPPlayerIface * iface) {
	vala_dacp_player_dacp_player_parent_iface = g_type_interface_peek_parent (iface);
	iface->now_playing_record = (DAAPRecord* (*)(DACPPlayer*)) vala_dacp_player_real_now_playing_record;
	iface->now_playing_artwork = (guchar* (*)(DACPPlayer* ,guint ,guint ,int*)) vala_dacp_player_real_now_playing_artwork;
	iface->play_pause = (void (*)(DACPPlayer*)) vala_dacp_player_real_play_pause;
	iface->pause = (void (*)(DACPPlayer*)) vala_dacp_player_real_pause;
	iface->next_item = (void (*)(DACPPlayer*)) vala_dacp_player_real_next_item;
	iface->prev_item = (void (*)(DACPPlayer*)) vala_dacp_player_real_prev_item;
	iface->cue_clear = (void (*)(DACPPlayer*)) vala_dacp_player_real_cue_clear;
	iface->cue_play = (void (*)(DACPPlayer* ,GList* ,guint)) vala_dacp_player_real_cue_play;
}


static void vala_dacp_player_instance_init (ValaDACPPlayer * self) {
}


GType vala_dacp_player_get_type (void) {
	static volatile gsize vala_dacp_player_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dacp_player_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDACPPlayerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dacp_player_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDACPPlayer), 0, (GInstanceInitFunc) vala_dacp_player_instance_init, NULL };
		static const GInterfaceInfo dacp_player_info = { (GInterfaceInitFunc) vala_dacp_player_dacp_player_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_dacp_player_type_id;
		vala_dacp_player_type_id = g_type_register_static (G_TYPE_OBJECT, "ValaDACPPlayer", &g_define_type_info, 0);
		g_type_add_interface_static (vala_dacp_player_type_id, DACP_TYPE_PLAYER, &dacp_player_info);
		g_once_init_leave (&vala_dacp_player_type_id__volatile, vala_dacp_player_type_id);
	}
	return vala_dacp_player_type_id__volatile;
}


static void _lambda0_ (const gchar* service_name, const gchar* display_name, DACPListener* self) {
	g_return_if_fail (service_name != NULL);
	g_return_if_fail (display_name != NULL);
	fprintf (stdout, "Found remote: %s, %s\n", service_name, display_name);
}


static void __lambda0__dacp_share_remote_found (DACPShare* _sender, const gchar* service_name, const gchar* remote_name, gpointer self) {
	_lambda0_ (service_name, remote_name, self);
}


static void _lambda1_ (const gchar* guid, DACPListener* self) {
	g_return_if_fail (guid != NULL);
	fprintf (stdout, "Add GUID request received\n");
}


static void __lambda1__dacp_share_add_guid (DACPShare* _sender, const gchar* guid, gpointer self) {
	_lambda1_ (guid, self);
}


DACPListener* dacp_listener_construct (GType object_type) {
	DACPListener * self = NULL;
	ValaDMAPDb* _tmp0_ = NULL;
	DMAPDb* _tmp1_;
	ValaDMAPContainerDb* _tmp2_ = NULL;
	DMAPContainerDb* _tmp3_;
	ValaDACPPlayer* _tmp4_ = NULL;
	DACPPlayer* _tmp5_;
	DACPShare* _tmp6_ = NULL;
	DACPShare* _tmp7_;
	self = (DACPListener*) g_object_new (object_type, NULL);
	_tmp0_ = vala_dmap_db_new ();
	_tmp1_ = (DMAPDb*) _tmp0_;
	_g_object_unref0 (self->priv->db);
	self->priv->db = _tmp1_;
	_tmp2_ = vala_dmap_container_db_new ();
	_tmp3_ = (DMAPContainerDb*) _tmp2_;
	_g_object_unref0 (self->priv->container_db);
	self->priv->container_db = _tmp3_;
	_tmp4_ = vala_dacp_player_new ();
	_tmp5_ = (DACPPlayer*) _tmp4_;
	_g_object_unref0 (self->priv->player);
	self->priv->player = _tmp5_;
	_tmp6_ = dacp_share_new ("dacplisten", self->priv->player, self->priv->db, self->priv->container_db);
	_tmp7_ = _tmp6_;
	_g_object_unref0 (self->priv->share);
	self->priv->share = _tmp7_;
	g_signal_connect_object (self->priv->share, "remote-found", (GCallback) __lambda0__dacp_share_remote_found, self, 0);
	g_signal_connect_object (self->priv->share, "add-guid", (GCallback) __lambda1__dacp_share_add_guid, self, 0);
	dacp_share_start_lookup (self->priv->share);
	return self;
}


DACPListener* dacp_listener_new (void) {
	return dacp_listener_construct (TYPE_DACP_LISTENER);
}


static void dacp_listener_class_init (DACPListenerClass * klass) {
	dacp_listener_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DACPListenerPrivate));
	G_OBJECT_CLASS (klass)->finalize = dacp_listener_finalize;
}


static void dacp_listener_instance_init (DACPListener * self) {
	self->priv = DACP_LISTENER_GET_PRIVATE (self);
}


static void dacp_listener_finalize (GObject* obj) {
	DACPListener * self;
	self = DACP_LISTENER (obj);
	_g_object_unref0 (self->priv->db);
	_g_object_unref0 (self->priv->container_db);
	_g_object_unref0 (self->priv->player);
	_g_object_unref0 (self->priv->share);
	G_OBJECT_CLASS (dacp_listener_parent_class)->finalize (obj);
}


GType dacp_listener_get_type (void) {
	static volatile gsize dacp_listener_type_id__volatile = 0;
	if (g_once_init_enter (&dacp_listener_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DACPListenerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) dacp_listener_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DACPListener), 0, (GInstanceInitFunc) dacp_listener_instance_init, NULL };
		GType dacp_listener_type_id;
		dacp_listener_type_id = g_type_register_static (G_TYPE_OBJECT, "DACPListener", &g_define_type_info, 0);
		g_once_init_leave (&dacp_listener_type_id__volatile, dacp_listener_type_id);
	}
	return dacp_listener_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GMainLoop* _tmp0_ = NULL;
	GMainLoop* loop;
	DACPListener* _tmp1_ = NULL;
	DACPListener* dacplistener;
	_tmp0_ = g_main_loop_new (NULL, FALSE);
	loop = _tmp0_;
	_tmp1_ = dacp_listener_new ();
	dacplistener = _tmp1_;
	g_main_loop_run (loop);
	result = 0;
	_g_object_unref0 (dacplistener);
	_g_main_loop_unref0 (loop);
	return result;
}


int main (int argc, char ** argv) {
	g_type_init ();
	return _vala_main (argv, argc);
}



