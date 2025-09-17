#include "../helper/helper.h"
#include "element_type.h"

void get_element_details(element_details *element) {
  // * Display symbol.
  add_new_tab();
  add_new_tab();
  printf("%sSymbol%s: %s%s%s", BLUE, RESET, YELLOW, element->symbol, RESET);
  add_new_line(1);

  // * Display name.
  add_new_tab();
  add_new_tab();
  printf("%sName%s: %s%s%s", BLUE, RESET, YELLOW, element->name, RESET);
  add_new_line(1);

  // * Display atomic number.
  add_new_tab();
  add_new_tab();
  printf("%sAtomic Number%s: %s%s%s", BLUE, RESET, YELLOW,
         element->atomic_number, RESET);
  add_new_line(1);

  // * Display chemical group block.
  add_new_tab();
  add_new_tab();
  printf("%sChemical Group Block%s: %s%s%s", BLUE, RESET, YELLOW,
         element->chemical_group_block, RESET);
  add_new_line(1);

  // * Display atomic mass.
  add_new_tab();
  add_new_tab();
  printf("%sAtomic Mass%s: %s%s%s", BLUE, RESET, YELLOW, element->atomic_mass,
         RESET);
  add_new_line(1);

  // * Display standard state.
  add_new_tab();
  add_new_tab();
  printf("%sStandard State%s: %s%s%s", BLUE, RESET, YELLOW,
         element->standard_state, RESET);
  add_new_line(1);

  // * Display electron configuration.
  add_new_tab();
  add_new_tab();
  printf("%sElectron Configuration%s: %s%s%s", BLUE, RESET, YELLOW,
         element->electron_configuration, RESET);
  add_new_line(1);

  // * Display oxidation states.
  add_new_tab();
  add_new_tab();
  printf("%sOxidation States%s: %s%s%s", BLUE, RESET, YELLOW,
         element->oxidation_states, RESET);
  add_new_line(1);

  // * Display electronegativity (pauling scale).
  add_new_tab();
  add_new_tab();
  printf("%sElectronegativity (Pauling Scale)%s: %s%s%s", BLUE, RESET, YELLOW,
         element->electronegativity, RESET);
  add_new_line(1);

  // * Display atomic radius (van der Waals).
  add_new_tab();
  add_new_tab();
  printf("%sAtomic Radius (Van Der Waals)%s: %s%s%s", BLUE, RESET, YELLOW,
         element->atomic_radius, RESET);
  add_new_line(1);

  // * Display ionization energy.
  add_new_tab();
  add_new_tab();
  printf("%sIonization Energy%s: %s%s%s", BLUE, RESET, YELLOW,
         element->ionization_energy, RESET);
  add_new_line(1);

  // * Display electron affinity.
  add_new_tab();
  add_new_tab();
  printf("%sElectron Affinity%s: %s%s%s", BLUE, RESET, YELLOW,
         element->electron_affinity, RESET);
  add_new_line(1);

  // * Display melting point.
  add_new_tab();
  add_new_tab();
  printf("%sMelting Point%s: %s%s%s", BLUE, RESET, YELLOW,
         element->melting_point, RESET);
  add_new_line(1);

  // * Display melting point.
  add_new_tab();
  add_new_tab();
  printf("%sBoiling Point%s: %s%s%s", BLUE, RESET, YELLOW,
         element->boiling_point, RESET);
  add_new_line(1);

  // * Display density.
  add_new_tab();
  add_new_tab();
  printf("%sDensity%s: %s%s%s", BLUE, RESET, YELLOW, element->density, RESET);
  add_new_line(1);

  // * Display year discovered.
  add_new_tab();
  add_new_tab();
  printf("%sYear Discovered%s: %s%s%s", BLUE, RESET, YELLOW,
         element->year_discovered, RESET);
  add_new_line(1);

  // * Display the reference link.
  add_new_tab();
  add_new_tab();
  printf("%sLink%s: %s%s%s", BLUE, RESET, YELLOW, element->link, RESET);
}
