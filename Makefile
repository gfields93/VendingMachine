#############################################################################
# Makefile for building: VendingMachine
# Generated by qmake (3.0) (Qt 5.6.0)
# Project:  VendingMachine.pro
# Template: app
# Command: /Users/angiefields/mxe/usr/bin/i686-w64-mingw32.static-qmake-qt5 -o Makefile VendingMachine.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = /Users/angiefields/mxe/usr/bin/i686-w64-mingw32.static-qmake-qt5
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: VendingMachine.pro ../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf ../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/spec_pre.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/qdevice.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/device_config.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/common/angle.conf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/qconfig.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_zlib_private.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qico.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qminimal.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qnativewifibearer.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlite.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlmysql.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlodbc.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlpsql.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqltds.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qtuiotouchplugin.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindows.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/qt_functions.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/qt_config.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/qt_config.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/spec_post.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/default_pre.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/default_pre.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/resolve_config.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds_post.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/default_post.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/rtti.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/precompile_header.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/warn_on.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/qt.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/resources.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/moc.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/opengl.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/uic.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/windows.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/testcase_targets.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/exceptions.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/yacc.prf \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/lex.prf \
		VendingMachine.pro \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/qtmain.prl \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/Qt5Widgets.prl \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/Qt5Gui.prl \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/Qt5Core.prl \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/plugins/platforms/qwindows.prl \
		../../../mxe/usr/i686-w64-mingw32.static/qt5/plugins/imageformats/qico.prl
	$(QMAKE) -o Makefile VendingMachine.pro
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/spec_pre.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/qdevice.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/device_config.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/common/angle.conf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/qconfig.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_zlib_private.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qico.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qminimal.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qnativewifibearer.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlite.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlmysql.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlodbc.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlpsql.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqltds.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qtuiotouchplugin.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindows.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/qt_functions.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/qt_config.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/qt_config.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/spec_post.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/default_pre.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/default_pre.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/resolve_config.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds_post.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/default_post.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/rtti.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/precompile_header.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/warn_on.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/qt.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/resources.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/moc.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/opengl.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/uic.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/win32/windows.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/testcase_targets.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/exceptions.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/yacc.prf:
../../../mxe/usr/i686-w64-mingw32.static/qt5/mkspecs/features/lex.prf:
VendingMachine.pro:
../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/qtmain.prl:
../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/Qt5Widgets.prl:
../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/Qt5Gui.prl:
../../../mxe/usr/i686-w64-mingw32.static/qt5/lib/Qt5Core.prl:
../../../mxe/usr/i686-w64-mingw32.static/qt5/plugins/platforms/qwindows.prl:
../../../mxe/usr/i686-w64-mingw32.static/qt5/plugins/imageformats/qico.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile VendingMachine.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) /Users/angiefields/Qt/QtProjects/VendingMachine/vendingmachine_plugin_import.cpp

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
