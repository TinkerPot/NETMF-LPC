using System;

namespace Microsoft.SPOT
{
    /// <summary>
    ///     Routing Strategy can be either of
    ///     Tunnel or Bubble
    /// </summary>
    /// <ExternalAPI/>
    public enum RoutingStrategy
    {
        /// <summary>
        ///     Tunnel
        /// </summary>
        /// <remarks>
        ///     Route the event starting at the root of
        ///     the visual tree and ending with the source
        /// </remarks>
        Tunnel,

        /// <summary>
        ///     Bubble
        /// </summary>
        /// <remarks>
        ///     Route the event starting at the source
        ///     and ending with the root of the visual tree
        /// </remarks>
        Bubble,

        /// <summary>
        ///     Direct
        /// </summary>
        /// <remarks>
        ///     Raise the event at the source only.
        /// </remarks>
        Direct
    }
}

