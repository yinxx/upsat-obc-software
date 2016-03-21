#include "obc_hal.h"

void HAL_obc_SD_ON() {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
}

void HAL_obc_SD_OFF() {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);
}

void HAL_obc_uart_tx(uint8_t *buf, uint16_t size) {
    HAL_UART_Transmit(&huart, buf, size, 10);
}

OBC_returnStateTypedef HAL_eps_uart_rx(uint8_t c) {

    OBC_returnStateTypedef res;

    res = HAL_UART_Receive(&huart, &c, 1, 10);

    return R_OK;
}