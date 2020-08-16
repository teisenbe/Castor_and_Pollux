#pragma once

/* Pulse (PWM) output using TCC peripheral. */

void gem_pulseout_init();

void gem_pulseout_set_frequency(uint8_t channel, uint32_t frequency);

void gem_pulseout_set_duty(uint8_t channel, float duty);