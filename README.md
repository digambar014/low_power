# Low-Power RTL Comparison

A small RTL study comparing common low-power design techniques on a counter.

## Overview

Four variants of the same counter are implemented and simulated to compare dynamic-power behaviour:

| File | Technique |
|------|-----------|
| `counter_baseline.v` | Ungated reference |
| `counter_clk_gate.v` | Clock gating |
| `counter_power.v` | Power-aware variant |
| `counter_pwr_gate.v` | Power gating |

## Files

- `counter_baseline.v`, `counter_clk_gate.v`, `counter_power.v`, `counter_pwr_gate.v`
- `low_power_tb.v` - testbench
- `run.sh` - simulation script

## Running

```bash
./run.sh
```

A simulation snapshot is included as `low_power_sim.png`.

## License

MIT - see [LICENSE](LICENSE).
