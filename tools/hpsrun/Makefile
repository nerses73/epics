INSTALL_BIN := /usr/local/bin
PROGFILES   += hps_epics
PROGFILES   += screenshot


.PHONY: all clean install uninstall

install:
	@for file in $(PROGFILES); do \
		echo "Installing $(INSTALL_BIN)/$$file" ; \
		install -m 0755 $$file $(INSTALL_BIN) ; \
	done

uninstall:
	@for file in $(PROGFILES); do $(RM) $(INSTALL_BIN)/$$file; done
