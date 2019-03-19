/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <syscall_no.h>
#include <aos/cli.h>
#include <cli_syscall_arg.h>
#include <arch_syscall.h>

int32_t aos_cli_register_command(const struct cli_command *cmd)
{
    cli_register_command_syscall_arg_t _arg;

    _arg.cmd = cmd;

    return (int32_t)SYSCALL(SYS_CLI_REGISTER_CMD, (void*)&_arg);
}

int32_t aos_cli_unregister_command(const struct cli_command *cmd)
{
    cli_unregister_command_syscall_arg_t _arg;

    _arg.cmd = cmd;

    return (int32_t)SYSCALL(SYS_CLI_UNREGISTER_CMD, (void*)&_arg);
}

int32_t aos_cli_register_commands(const struct cli_command *cmd, int num_cmds)
{
    cli_register_commands_syscall_arg_t _arg;

    _arg.cmd = cmd;
    _arg.num_cmds = num_cmds;

    return (int32_t)SYSCALL(SYS_CLI_REGISTER_CMDS, (void*)&_arg);
}

int32_t aos_cli_unregister_commands(const struct cli_command *cmd, int num_cmds)
{
    cli_unregister_commands_syscall_arg_t _arg;

    _arg.cmd = cmd;
    _arg.num_cmds = num_cmds;

    return (int32_t)SYSCALL(SYS_CLI_UNREGISTER_CMDS, (void*)&_arg);
}

