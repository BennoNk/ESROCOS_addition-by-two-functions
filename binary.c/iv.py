#! /usr/bin/python

Ada, C, GUI, SIMULINK, VHDL, OG, RTDS, SYSTEM_C, SCADE6, VDM, CPP = range(11)
thread, passive, unknown = range(3)
PI, RI = range(2)
synch, asynch = range(2)
param_in, param_out = range(2)
UPER, NATIVE, ACN = range(3)
cyclic, sporadic, variator, protected, unprotected = range(5)
enumerated, sequenceof, sequence, set, setof, integer, boolean, real, choice, octetstring, string = range(11)
functions = {}

functions['manager'] = {
    'name_with_case' : 'manager',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['manager']['interfaces']['clock'] = {
    'port_name': 'clock',
    'parent_fv': 'manager',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 2000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 2000,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['manager']['interfaces']['clock']['paramsInOrdered'] = []

functions['manager']['interfaces']['clock']['paramsOutOrdered'] = []

functions['manager']['interfaces']['sum'] = {
    'port_name': 'sum',
    'parent_fv': 'manager',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['manager']['interfaces']['sum']['paramsInOrdered'] = ['sum_param']

functions['manager']['interfaces']['sum']['paramsOutOrdered'] = []

functions['manager']['interfaces']['sum']['in']['sum_param'] = {
    'type': 'T_Int8',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteesrocos_workspaceaddition-by-two-functions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'sum',
    'param_direction': param_in
}

functions['manager']['interfaces']['numbers'] = {
    'port_name': 'numbers',
    'parent_fv': 'manager',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'addition',
    'calling_threads': {},
    'distant_name': 'numbers',
    'queue_size': 1
}

functions['manager']['interfaces']['numbers']['paramsInOrdered'] = ['number1', 'number2']

functions['manager']['interfaces']['numbers']['paramsOutOrdered'] = []

functions['manager']['interfaces']['numbers']['in']['number1'] = {
    'type': 'T_Int8',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteesrocos_workspaceaddition-by-two-functions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'numbers',
    'param_direction': param_in
}

functions['manager']['interfaces']['numbers']['in']['number2'] = {
    'type': 'T_Int8',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteesrocos_workspaceaddition-by-two-functions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'numbers',
    'param_direction': param_in
}

functions['addition'] = {
    'name_with_case' : 'addition',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['addition']['interfaces']['numbers'] = {
    'port_name': 'numbers',
    'parent_fv': 'addition',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['addition']['interfaces']['numbers']['paramsInOrdered'] = ['number1', 'number2']

functions['addition']['interfaces']['numbers']['paramsOutOrdered'] = []

functions['addition']['interfaces']['numbers']['in']['number1'] = {
    'type': 'T_Int8',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteesrocos_workspaceaddition-by-two-functions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'numbers',
    'param_direction': param_in
}

functions['addition']['interfaces']['numbers']['in']['number2'] = {
    'type': 'T_Int8',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteesrocos_workspaceaddition-by-two-functions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'numbers',
    'param_direction': param_in
}

functions['addition']['interfaces']['sum'] = {
    'port_name': 'sum',
    'parent_fv': 'addition',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'manager',
    'calling_threads': {},
    'distant_name': 'sum',
    'queue_size': 1
}

functions['addition']['interfaces']['sum']['paramsInOrdered'] = ['sum_param']

functions['addition']['interfaces']['sum']['paramsOutOrdered'] = []

functions['addition']['interfaces']['sum']['in']['sum_param'] = {
    'type': 'T_Int8',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': '/tmp/uniqhometasteesrocos_workspaceaddition-by-two-functions__iv_1_3.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'sum',
    'param_direction': param_in
}
