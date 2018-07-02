def count_gc(sequence):
    """Counts the nitrogenous bases of the given sequence.
    Ambiguous bases are counted fractionally.
    Sequence must be in upper case"""
    gc = 0
    for base in sequence:
        if   base in 'GC':
            gc += 1.0
        elif base in 'YRWSKM':
            gc += 0.5
        elif base in 'DH':
            gc += 0.33
        elif base in 'VB':
            gc += 0.66
    return gc
def gc_content(sequence):
    """Calculates the GC content of a DNA sequence.
    Mixed case, gaps and ambiguity codes are permitted"""
    sequence = sequence.upper().replace('-',"")
    if not sequence: 
        return 0
    return 100.0 * count_gc(sequence) / len(sequence)

print(gc_content("actacgattagag"))
